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
    char *stringIn = "A Man A Plan A Canal – Panama";
    tokentest(*stringIn);
}

@end

                                     
