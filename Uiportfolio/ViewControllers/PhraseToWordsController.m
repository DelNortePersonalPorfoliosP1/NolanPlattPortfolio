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
@synthesize outputField;

- (void)viewDidLoad {
    [super viewDidLoad];
}
-(IBAction)reversePhrase:(id)sender {
    
   outputField.text = [NSString stringWithFormat:@"%s" , reversePhrase(inputField.text.UTF8String)];
}  

@end

                                     
