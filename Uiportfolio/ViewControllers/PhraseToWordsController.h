//
//  PhraseToWords.h
//  Uiportfolio
//
//  Created by Nolan Platt on 12/3/19.
//  Copyright © 2019 NP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhraseToWordsController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *inputField;

@property (weak, nonatomic) IBOutlet UITextField *reverseOutput;
@property (weak, nonatomic) IBOutlet UITextField *shortHandOutput;

char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, char* output);


char *reverseString(char *word);
char *reversePhrase(const char * phrase);
char *shortHandPhrase(const char * phrase);
char *shortHandString(char *word);
//char tokentest(char str);
void tokentest(void);


@end

