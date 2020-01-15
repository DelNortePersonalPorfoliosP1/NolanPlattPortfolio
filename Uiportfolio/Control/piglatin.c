//
//  piglatin.c
//  Uiportfolio
//
//  Created by Platt, Nolan on 12/17/19.
//  Copyright © 2019 NP. All rights reserved.
//
/*

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
  const char *tokenizer = " ";
   
  long i = 0;
  char *token = strtok((char *)str, tokenizer);          // 1st word
  while( token != NULL ) {                // NULL mean end of phrase
    printf( "String after tokenization: %s", token );
    strcpy(in.words[i].word, token);
    strcpy(in.words[i].reversed, in.words[i].word);
      reverseString(in.words[i].reversed);
      
      if (i == 0)
      {
          strcpy(in.reversed, in.words[i].reversed);
          strcat(in.reversed, tokenizer);
      } else {
          strcat(in.reversed, in.words[i].reversed);
          strcat(in.reversed, tokenizer);
      }
      
      token = strtok(NULL, tokenizer);           // remaining words, NULL means same phrase
      i++;
        
  }
  return in.reversed;
}

char *reverseString(char *str)
{
    unsigned long len = strlen(str);
    int i;
    for (i=0; i<len/2; i++)
    {
        //printf("swap %c with %c\n", word[i], word[len-1-i]);
        char temp = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    //printf("%s\n",word);
    return str;
}

char *shortyPhrase(const char * str) {
  const char *tokenizer = " ";
   
  long i = 0;
  char *token = strtok((char *)str, tokenizer);          // 1st word
  while(token != NULL ) {                // NULL mean end of phrase
    printf( "word after tokenizing: %s\n", token );
    strcpy(in.words[i].word, token);
    printf("word in structure %li: %s\n", i, in.words[i].word);
    strcpy(in.words[i].shorted, in.words[i].word);
      printf("word in shorthand: %d\n", shortyWord(in.words[i].shorted));
      
      if (i == 0)
      {
          strcpy(in.shorted, in.words[i].shorted);
          strcat(in.shorted, tokenizer);
      } else {
          strcat(in.shorted, in.words[i].shorted);
          strcat(in.shorted, tokenizer);
      }
      printf("phrase in shorthand: %s\n", in.shorted);
      
      token = strtok(NULL, tokenizer);           // remaining words, NULL means same phrase
      i++;
        
  }
  return in.shorted;
}

char *shortyWord(char *str)
{
    unsigned long len = strlen(str);
    int i, j;
    
    for(i=(-1); i<len; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
        str[i]=='o' || str[i]=='u' || str[i]=='A' ||
        str[i]=='E' || str[i]=='I' || str[i]=='O' ||
        str[i]=='U')
        {
            for(j=i; j<len; j++)
            {
                str[j]=str[j+1];
            }
        len--;
        }
    }
    return str;
}




*/
