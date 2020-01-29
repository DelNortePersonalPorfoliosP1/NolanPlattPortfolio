//
//  GolfLevel2.h
//  Uiportfolio
//
//  Created by Platt, Nolan on 1/24/20.
//  Copyright © 2020 JM. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface GolfLevel2 : UIViewController


@property (weak, nonatomic) IBOutlet UIImageView *Hole;
@property (weak, nonatomic) IBOutlet UIImageView *Ball;
@property (weak, nonatomic) IBOutlet UIImageView *Wall1;
@property (weak, nonatomic) IBOutlet UIImageView *Wall2;

@property (weak, nonatomic) IBOutlet UIButton *NextLevelButton;
@property (weak, nonatomic) IBOutlet UILabel *strokeCountLabel;
@property (weak, nonatomic) IBOutlet UILabel *instructionsLabel;
@property (weak, nonatomic) IBOutlet UILabel *youLostLabel;
@property (weak, nonatomic) IBOutlet UILabel *youWinLabel;

@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) float ballVelocityX;
@property (nonatomic) float ballVelocityY;
@property (strong, nonatomic) NSTimer *gameTimer;
@property (nonatomic) int strokeCount;

#define speedScale 0.20
#define speedDamping 0.90  // friction rate
#define stopSpeed 5.0

@end
