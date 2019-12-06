//
//  ReverseController.m
//  Uiportfolio
//
//  Created by Nolan Platt on 12/3/19.
//  Copyright © 2019 JM. All rights reserved.
//


#import "ReverseController.h"
#include "control.h"
#include "string.h"

@implementation ReverseController
@synthesize arrayField;
@synthesize pointerField;
@synthesize recurseField;


@synthesize inputField;


- (void)viewDidLoad {
    [super viewDidLoad];
}

-(IBAction)reverseString:(id)sender {

    const char *cInput = [inputField.text UTF8String];
    long inputLength = inputField.text.length;

    //printf("Length: %ld\n", inputLength);

    arrayField.text = [NSString stringWithFormat:@"%s", revXArray((char*)cInput, inputLength) ];

   // outputField.text = [NSString stringWithFormat:@"%s", revXRecurse((char*)cInput, inputLength) ];
    

}

    
@end

