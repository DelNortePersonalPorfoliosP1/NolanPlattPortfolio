//
//  PhraseToWords.h
//  Uiportfolio
//
//  Created by Nolan Platt on 12/3/19.
//  Copyright © 2019 NP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhraseToWordsController : UIViewController

char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, char* output);

@end
 





