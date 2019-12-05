//
//  ReverseController.h
//  Uiportfolio
//
//  Created by Nolan Platt on 12/3/19.
//  Copyright © 2019 JM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ReverseController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *outputField;
@property (strong, nonatomic) IBOutlet UITextField *inputField;
char *revXArray(char* input, long length);
char *revXRecurse(char* input, long length);
char *revXPointer(char* input, long length);
char *paliEval(char* input, long length);
@end




