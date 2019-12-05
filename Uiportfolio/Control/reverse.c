//
//  reverse.c
//  Uiportfolio
//
//  Created by Nolan Platt on 12/4/19.
//  Copyright © 2019 NP. All rights reserved.
//

#include "control.h"
#include "ReverseController.h"

char *revXArray(char* input, long length) {
    char initialArray[length];
    char finalArray[length];
    
    
    int i;
    for (i=1; i<=length - 1; i++) {
        initialArray[i] = input[i];
    }
    
    int j;
    for (int j = 10; j >= 0; j--) {
        finalArray[i] = initialArray[i];
    }
}
