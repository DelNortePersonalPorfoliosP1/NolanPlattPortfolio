//
//  ReverseController.m
//  Uiportfolio
//
//  Created by Nolan Platt on 12/3/19.
//  Copyright © 2019 NP. All rights reserved.
//


#import "ReverseController.h"
#include "control.h"
#include "string.h"

@implementation ReverseController
@synthesize arrayField;
@synthesize pointerField;
@synthesize recurseField;
@synthesize inputField;
@synthesize paliField;


 
-(IBAction)reverseString:(id)sender {

    const char *cInput = [inputField.text UTF8String];
    long inputLength = inputField.text.length;

    //printf("Length: %ld\n", inputLength);

    char* output = revXArray((char*)cInput, inputLength);
    // Array Method
    arrayField.text = [NSString stringWithFormat:@"%s", revXArray((char*)cInput, inputLength) ];
    
    // Recurse Method
    recurseField.text = [NSString stringWithFormat:@"%s", revXRecurse((char*)cInput, inputLength) ];
    
    // Pointer Method
    pointerField.text = [NSString stringWithFormat:@"%s", revXPointer((char*)cInput, inputLength) ];

    paliField.text = [NSString stringWithFormat:@"%s", paliEval((char*)cInput, output) ];

    

}

    
@end

