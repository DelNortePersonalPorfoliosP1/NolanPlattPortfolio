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
 

char *reversePhrase(const char * phrase) {
    
   // printf("Reversephrase method is being called");
       
     const char *tokenizer = " ";
      
     long i = 0;
     char *token = strtok((char *)phrase, tokenizer);
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



char *reverseString(char *word)
{
    unsigned long len = strlen(word);
    int i;
    for (i=0; i < len / 2; i++) {
        
        char temp = word[i];
        word[i]=word[len-1-i];
        word[len-1-i]=temp;
    }
    return word;
}








char *shortHandPhrase(const char * phrase) { //method takes in a phrase defined as a char
        const char *tokenizer = " ";
         
        long i = 0;
        char *token = strtok((char *)phrase, tokenizer);          // 1st word
        while(token != NULL ) {
          printf( "String after tokenization: %s\n", token );
          strcpy(in.words[i].word, token);
          printf("String in structure %li: %s\n", i, in.words[i].word);
          strcpy(in.words[i].shorted, in.words[i].word);
            printf("String in ShortHand: %s\n", shortHandString(in.words[i].shorted));
            
            if (i == 0)
            {
                strcpy(in.shorted, in.words[i].shorted);
                strcat(in.shorted, tokenizer);
            } else {
                strcat(in.shorted, in.words[i].shorted);
                strcat(in.shorted, tokenizer);
            }
            printf("Shorthand done, phrase: %s\n", in.shorted);
            
            token = strtok(NULL, tokenizer);           
            i++;
              
        }
        return in.shorted;
}

char *shortHandString(char *word) {
    unsigned long len = strlen(word);
       int i, j;
       
       for(i=(-1); i<len; i++)
       {
           if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u' || word[i]=='A' ||
           word[i]=='E' || word[i]=='I' || word[i]=='O' ||
           word[i]=='U')
           {
               for(j=i; j<len; j++)
               {
                   word[j]=word[j+1];
               }
           len--;
           }
       }
       return word;

}





