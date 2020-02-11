//
//  CardGameController.m
//  Uiportfolio
//
//  Created by Platt, Nolan on 2/3/20.
//  Copyright © 2020 NP. All rights reserved.
//

#import "CardGameController.h"

#include <string.h>
#include "control.h"

@implementation CardGameController

@synthesize card1;
@synthesize card2;


- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    
    printf("Touches began");
   
}


-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
   [card1 setImage:[UIImage imageNamed:@"hA"]];
    [card2 setImage:[UIImage imageNamed:@"hA"]];


}


@end

                                     
