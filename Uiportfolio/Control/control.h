//
//  Header.h
//  Projects
//
//  Created by John Mortensen on 9/21/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//


#ifndef portfolio_h
#define portfolio_h
// Classic C style defines for Operator control
#define BUFFER_SIZE 80
#define FILE_BUFFER_SIZE 1024
#define LINE_BUFFER_SIZE 256
#define WORDS_TO_LINE_SIZE 64
// Math operations
#define PLUS 0
#define MINUS 1
#define MULTIPLY 2
#define DIVIDE 3
#define MODULO 4
#define SQRT 5

// C Function Name and Line number
typedef struct candidatesFuncs {
    char name[LINE_BUFFER_SIZE];
    unsigned int functionStartLine;
} CANDIDATE_FUNCS;
CANDIDATE_FUNCS* fileParse(char *fn);

// Output Log
typedef struct outLog
{
    char message[LINE_BUFFER_SIZE];
} OUTLOG;
// Cutome prototypes for output log
OUTLOG* jumpers(int jumps, char *animal);

// Programming Languages Data Definition
typedef enum {NoEXE, JIT, JVM, ByteCode, Native} EXE_TYPE;
typedef enum {NoLang, OOP, MP, Iterative} LANG_TYPE;
typedef struct language {
    char name[20];
    char yob[10];
    char creator[80];
    char search[LINE_BUFFER_SIZE];
    EXE_TYPE exetype;
    LANG_TYPE langtype;
} LANGUAGES;
// Cutome prototypes for list return
LANGUAGES* progLanguages(void);
LANGUAGES* searchLanguages(char *searchTerm);

// Classic C style prototype for control functions
int histogram(char *message);
int zeroTest(double value);
double calculateIt(double arg1, int mathOp, double arg2);
double hyptoneuse (double side1, double side2);
int largest(int arr[], int n); //Temporary prototype definition
char * tokentester(char * str) ;


char *reversePhrase(const char * phrase);
char *reverseString(char *word);
char *shortHandPhrase(const char * phrase);
char *shortHandString(char *word);



// Card Game

#define SUIT_CNT 4
#define SYMBOL_CNT 13
#define DECK_CNT 52
#define PYRMD_CNT 28
#define STK_CNT 24
#define PYRMD_ROWS 7

static char *colorStrings[] = {"red", "black"};
static char *suitStrings[] = {"clubs", "diamonds", "hearts", "spades"};
static char *symbolStrings[] = {"ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};
typedef enum {Red, Black} COLOR_TYPE;
typedef enum {Clubs, Diamonds, Hearts, Spades} SUIT_TYPE;
typedef enum {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King} SYMBOL_TYPE;
typedef struct card {
    int cID;
    int value;
    int row;
    COLOR_TYPE color;
    SUIT_TYPE suit;
    SYMBOL_TYPE symbol;
    char cImage[20];
} CARD;
CARD * createdeck(void);
void shuffledeck(CARD *c);
void dealdeck(CARD *c);
void freedeck(CARD *c);
CARD * createPyramidPattern(void);
void setDeckToPyramid(CARD *, CARD *);
CARD * createStock(void);


#endif /* portfolio_h */
