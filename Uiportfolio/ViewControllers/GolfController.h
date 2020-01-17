//
//  GolfController.h
//  Uiportfolio
//
//  Created by Platt, Nolan on 1/15/20.
//  Copyright © 2020 NP. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface GolfController : UIViewController


@property (weak, nonatomic) IBOutlet UIImageView *Hole;
@property (weak, nonatomic) IBOutlet UIImageView *Ball;

@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) float ballVelocityX;
@property (nonatomic) float ballVelocityY;
@property (strong, nonatomic) NSTimer *gameTimer;

#define speedScale 0.20
#define speedDamping 0.90  // friction rate
#define stopSpeed 5.0

@end
