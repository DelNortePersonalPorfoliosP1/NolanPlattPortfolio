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


- (void)viewDidLoad {
[super viewDidLoad];
    self.Hole.layer.cornerRadius = .5*self.Hole.layer.frame.size.height;
    self.Hole.layer.masksToBounds = YES;
}


    -(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {

}
    -(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
}

    -(void)moveBall {
}

@end

