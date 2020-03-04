//
//  GolfLevel2.m
//  Uiportfolio
//
//  Created by Platt, Nolan on 1/24/20.
//  Copyright © 2020 JM. All rights reserved.
//

#include "control.h"
#import "GolfLevel2.h"

@implementation GolfLevel2

@synthesize Ball;
@synthesize Hole;
@synthesize Wall1;
@synthesize Wall2;
@synthesize NextLevelButton;
@synthesize youLostLabel;
@synthesize instructionsLabel;
@synthesize youWinLabel;
@synthesize strokeCountLabel;

- (void)viewDidLoad {
[super viewDidLoad];
    self.Hole.layer.cornerRadius = .5*self.Hole.layer.frame.size.height;
    self.Hole.layer.masksToBounds = YES;
    NextLevelButton.hidden = YES;
    youWinLabel.hidden = YES;
    youLostLabel.hidden = YES;
}


-(void)moveBall {
  self.ballVelocityX = speedDamping * self.ballVelocityX;
  self.ballVelocityY = speedDamping * self.ballVelocityY;
   
  self.Ball.center = CGPointMake(self.Ball.center.x + self.ballVelocityX, self.Ball.center.y + self.ballVelocityY);
   
 
  if (CGRectIntersectsRect(self.Ball.frame, self.Hole.frame)) {
      if(_strokeCount > 2) {
               youLostLabel.hidden = NO;
               instructionsLabel.hidden = YES;
               Hole.hidden = YES;
               Ball.hidden = YES;
               Wall1.hidden = YES;
          Wall2.hidden = YES;
           }
           if(2 >= _strokeCount) {
               NextLevelButton.hidden = NO;
               instructionsLabel.hidden = YES;
               youWinLabel.hidden = NO;
               Hole.hidden = YES;
               Ball.hidden = YES;
               Wall1.hidden = YES;
               Wall2.hidden = YES;
           }
      

    [self.gameTimer invalidate];
    [self.view setUserInteractionEnabled:YES];
    self.Ball.center = CGPointMake(self.Hole.center.x, self.Hole.center.y);
    self.Ball.alpha = 0.2;

  }
   

  if(fabs(self.ballVelocityX) < stopSpeed && fabs(self.ballVelocityY) < stopSpeed) {
    [self.gameTimer invalidate];
    [self.view setUserInteractionEnabled:YES];
  }
    
    //check if ball intersects / touches wall
    
    
    if (CGRectIntersectsRect(self.Ball.frame, self.Wall1.frame)) {
       //[self.gameTimer invalidate];
        //[self.view setUserInteractionEnabled:YES];
        
        
        _ballVelocityX = -_ballVelocityX;
        _ballVelocityY = -_ballVelocityY;
        
       
     }
    
    if (CGRectIntersectsRect(self.Ball.frame, self.Wall2.frame)) {
          //[self.gameTimer invalidate];
           //[self.view setUserInteractionEnabled:YES];
           
           
           _ballVelocityX = -_ballVelocityX;
           _ballVelocityY = -_ballVelocityY;
           
          
        }
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    
    self.strokeCount++;
      
    self.strokeCountLabel.text = [NSString stringWithFormat:@"Strokes: %d" , _strokeCount];
    
    
  UITouch *touch = [touches anyObject];
    
  [self.view setUserInteractionEnabled:NO];
   
  self.firstPoint = [touch locationInView:self.view];
   
}


-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
   
  UITouch *touch = [touches anyObject];
   
  self.lastPoint = [touch locationInView:self.view];
   
  CGPoint swipeVector = CGPointMake(self.lastPoint.x - self.firstPoint.x, self.lastPoint.y - self.firstPoint.y);
   
  self.ballVelocityX = speedScale * swipeVector.x;
  self.ballVelocityY = speedScale * swipeVector.y;
   
  self.gameTimer = [NSTimer scheduledTimerWithTimeInterval:.05 target:self selector:@selector(moveBall) userInfo:nil repeats:YES];
}

@end

