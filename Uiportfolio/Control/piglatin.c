//
//  piglatin.c
//  Uiportfolio
//
//  Created by Platt, Nolan on 12/17/19.
//  Copyright © 2019 NP. All rights reserved.
//

#include <stdio.h>
#include "string.h"
typedef struct language {
    char word[80];
    char reversed[80];
    char pigged[80];
    char shorted[80];
} WORDS;
typedef struct phrases {
    char phrases[1000];
    WORDS wordList[1000];
} PHRASE;


char pig(char sentence) {
    
    
    char test = "hi";
    return test;
    
}
