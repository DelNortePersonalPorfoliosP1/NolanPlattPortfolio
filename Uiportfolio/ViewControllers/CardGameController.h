//
//  CardGameController.h
//  Uiportfolio
//
//  Created by Platt, Nolan on 2/11/20.
//  Copyright © 2020 JM. All rights reserved.
//


#import <UIKit/UIKit.h>
#include "control.h"

@interface CardGameController : UIViewController

{
    CARD *cards;
    CARD *pyramid;
}

@property (strong, nonatomic) IBOutlet UIImageView *foundation;
@property (strong, nonatomic) IBOutlet UIImageView *waste;

@property (weak, nonatomic) IBOutlet UIImageView *cardDeck;
@property (weak, nonatomic) IBOutlet UIImageView *playerCards;

@property (strong, nonatomic) NSTimer *gameTimer;


@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;

// UIImageView Variables
@property (strong, nonatomic) IBOutlet UIImageView *c11;
@property (strong, nonatomic) IBOutlet UIImageView *c21;
@property (strong, nonatomic) IBOutlet UIImageView *c22;
@property (strong, nonatomic) IBOutlet UIImageView *c31;
@property (strong, nonatomic) IBOutlet UIImageView *c32;
@property (strong, nonatomic) IBOutlet UIImageView *c33;
@property (strong, nonatomic) IBOutlet UIImageView *c41;
@property (strong, nonatomic) IBOutlet UIImageView *c42;
@property (strong, nonatomic) IBOutlet UIImageView *c43;
@property (strong, nonatomic) IBOutlet UIImageView *c44;
@property (strong, nonatomic) IBOutlet UIImageView *c51;
@property (strong, nonatomic) IBOutlet UIImageView *c52;
@property (strong, nonatomic) IBOutlet UIImageView *c53;
@property (strong, nonatomic) IBOutlet UIImageView *c54;
@property (strong, nonatomic) IBOutlet UIImageView *c55;
@property (strong, nonatomic) IBOutlet UIImageView *c61;
@property (strong, nonatomic) IBOutlet UIImageView *c62;
@property (strong, nonatomic) IBOutlet UIImageView *c63;
@property (strong, nonatomic) IBOutlet UIImageView *c64;
@property (strong, nonatomic) IBOutlet UIImageView *c65;
@property (strong, nonatomic) IBOutlet UIImageView *c66;
@property (strong, nonatomic) IBOutlet UIImageView *c71;
@property (strong, nonatomic) IBOutlet UIImageView *c72;
@property (strong, nonatomic) IBOutlet UIImageView *c73;
@property (strong, nonatomic) IBOutlet UIImageView *c74;
@property (strong, nonatomic) IBOutlet UIImageView *c75;
@property (strong, nonatomic) IBOutlet UIImageView *c76;
@property (strong, nonatomic) IBOutlet UIImageView *c77;

@end

