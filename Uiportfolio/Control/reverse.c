//
//  reverse.c
//  Uiportfolio
//
//  Created by Nolan Platt on 12/4/19.
//  Copyright © 2019 NP. All rights reserved.
//

#include "control.h"
#include <stdio.h>
#include <string.h>



char *revXArray(const char* input, long length) {
    char newCharViaArray;
    // copy string to buffer, don't disrupt original
    strncpy(newCharViaArray, input, length);
    // reverse char's in by array reverence
    
    return newCharViaArray;
}





/*
char *revXArray(char* input, long lengthInitial) {
    
    long length = lengthInitial + 1;
    
    char initialArray[length];
    char finalArray[length];
    char *finalString;
    
    
    int i;
    for (i=0; i<=length - 1; i++) {
        initialArray[i] = input[i];
    }
    
    
    int n;
    for (n=length - 1;n>=0;n--) {
        finalString[n] = initialArray[n - 1];
    }
    printf("Final string: %s\n", finalString);
    
    return finalString;
    
    
}
 */
