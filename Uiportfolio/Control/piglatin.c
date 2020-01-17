//
//  piglatin.c
//  Uiportfolio
//
//  Created by Platt, Nolan on 12/17/19.
//  Copyright © 2019 NP. All rights reserved.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "control.h"

typedef struct words {
    char word[BUFFER_SIZE];
    char reversed[BUFFER_SIZE];
    char pigged[BUFFER_SIZE];
    char shorted[BUFFER_SIZE];
} WORDS;
typedef struct phrases {
    char original[LINE_BUFFER_SIZE];
    char piglatin[LINE_BUFFER_SIZE];
    char shorted[LINE_BUFFER_SIZE];
    char reversed[LINE_BUFFER_SIZE];
    WORDS words[WORDS_TO_LINE_SIZE];
} PHRASE;

PHRASE in;
 

char *reversePhrase(const char * str) {
    
   // printf("Reversephrase method is being called");
       
     const char *tokenizer = " ";
      
     long i = 0;
     char *token = strtok((char *)str, tokenizer);
     while( token != NULL ) {
         printf( "String tokenization: %s\n", token );

       strcpy(in.words[i].word, token);
       printf("String in struct: %li: %s\n", i, in.words[i].word);
       strcpy(in.words[i].reversed, in.words[i].word);
          printf("String reversed: %s\n", reverseString(in.words[i].reversed));
         if (i == 0)
         {
             strcpy(in.reversed, in.words[i].reversed);
             strcat(in.reversed, tokenizer);
         } else {
             strcat(in.reversed, in.words[i].reversed);
             strcat(in.reversed, tokenizer);
         }
         printf("Finished - reversed phrased: %s\n", in.reversed);
         
         token = strtok(NULL, tokenizer);
         i++;
     }
        return in.reversed;
}



char *reverseString(char *str)
{
    unsigned long len = strlen(str);
    int i;
    for (i=0; i < len / 2; i++) {
    
        char temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return str;
}








char *shortHand(const char * str) { //method takes in a phrase defined as a char
        
  return *str;
}





