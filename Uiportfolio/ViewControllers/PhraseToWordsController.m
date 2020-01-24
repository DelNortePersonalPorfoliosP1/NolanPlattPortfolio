//
//  PhraseToWordsController.m
//  Uiportfolio
//
//  Created by Platt, Nolan on 12/11/19.
//  Copyright © 2019 NP. All rights reserved.
//

#import "PhraseToWordsController.h"

#include <string.h>
#include "control.h"

@implementation PhraseToWordsController


@synthesize inputField;
@synthesize reverseOutput;
@synthesize shortHandOutput;

- (void)viewDidLoad {
    [super viewDidLoad];
}
-(IBAction)reversePhrase:(id)sender {
    
   reverseOutput.text = [NSString stringWithFormat:@"%s" , reversePhrase(inputField.text.UTF8String)];
    
    shortHandOutput.text = [NSString stringWithFormat:@"%s" , shortHandPhrase(inputField.text.UTF8String)];
}  

@end

                                     
