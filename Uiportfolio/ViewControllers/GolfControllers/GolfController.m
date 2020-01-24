//
//  GolfController.m
//  Uiportfolio
//
//  Created by Platt, Nolan on 1/15/20.
//  Copyright © 2020 NP. All rights reserved.
//

#include "control.h"
#import "GolfController.h"

@implementation GolfController

@synthesize Ball;
@synthesize Hole;
@synthesize Wall;

- (void)viewDidLoad {
[super viewDidLoad];
    self.Hole.layer.cornerRadius = .5*self.Hole.layer.frame.size.height;
    self.Hole.layer.masksToBounds = YES;
}


-(void)moveBall {
  self.ballVelocityX = speedDamping * self.ballVelocityX;
  self.ballVelocityY = speedDamping * self.ballVelocityY;
   
  self.Ball.center = CGPointMake(self.Ball.center.x + self.ballVelocityX, self.Ball.center.y + self.ballVelocityY);
   
 
  if (CGRectIntersectsRect(self.Ball.frame, self.Hole.frame)) {
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
    
    
    if (CGRectIntersectsRect(self.Ball.frame, self.Wall.frame)) {
       //[self.gameTimer invalidate];
        //[self.view setUserInteractionEnabled:YES];
        
        
        _ballVelocityX = -_ballVelocityX;
        _ballVelocityY = -_ballVelocityY;
        
       
     }
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
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

