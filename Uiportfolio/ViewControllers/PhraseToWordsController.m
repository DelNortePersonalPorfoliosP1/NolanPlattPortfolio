//
//  PhraseToWordsController.m
//  Uiportfolio
//
//  Created by Platt, Nolan on 12/11/19.
//  Copyright © 2019 JM. All rights reserved.
//

#import "PhraseToWordsController.h"
#include "control.h"

#include "string.h"

@implementation PhraseToWordsController


@synthesize inputField;
@synthesize outputField;

- (void)viewDidLoad {
    [super viewDidLoad];
}
-(IBAction)reversePhrase:(id)sender {
    const char *cInput = [inputField.text UTF8String];
      long inputLength = inputField.text.length;

      //printf("Length: %ld\n", inputLength);

      char* output = revXArray((char*)cInput, inputLength);

    
    outputField.text = [NSString stringWithFormat:@"%s", revXArray((char*)cInput, inputLength) ];
}

@end

                                     
