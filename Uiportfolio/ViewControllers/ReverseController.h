//
//  ReverseController.h
//  Uiportfolio
//
//  Created by Nolan Platt on 12/3/19.
//  Copyright © 2019 NP. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReverseController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *inputField;
@property (strong, nonatomic) IBOutlet UITextField *arrayField;
@property (strong, nonatomic) IBOutlet UITextField *recurseField;
@property (strong, nonatomic) IBOutlet UITextField *pointerField;
@property (strong, nonatomic) IBOutlet UITextField *paliField;


char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, char* output);
@end
 




