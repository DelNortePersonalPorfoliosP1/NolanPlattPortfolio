//
//  piglatin.c
//  Uiportfolio
//
//  Created by Platt, Nolan on 12/17/19.
//  Copyright © 2019 NP. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include "control.h"

char tokentest(char str);



char tokentest(char str) {
    printf("Function is being called");
  PHRASE in;
  const char *tokenizer = " ";
   
    strcpy(in.original, &str);
  printf( "original phrase: %s\n", in.original );
  long i = 0;
    
    char *token = strtok(NULL, tokenizer);    // remaining words, NULL means same str

  while( token != NULL ) {
    printf( "word after tokenizing: %s\n", token );
     
    strcpy(in.words[i].word, token);
    printf( "word in structure %li: %s\n", i, in.words[i].word);
     
    
    i++;
    token = strtok(NULL, tokenizer);
  }
    return token;
}


