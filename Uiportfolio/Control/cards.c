//
//  cards.c
//  Uiportfolio
//
//  Created by Platt, Nolan on 2/11/20.
//  Copyright © 2020 NP. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

#include "control.h"

/**

*/
CARD * createdeck()
{
    CARD *card;

    /* Initial memory allocation */
    card = (CARD *)malloc(sizeof(CARD) * DECK_CNT);         // Intro to memory allocatin
    
    for(int suit = Clubs; suit <= Spades; suit++) {
        
        for(int symbol = Ace; symbol <= King; symbol++ ) {
            int index = (suit * SYMBOL_CNT) + symbol;
            card[index].cID = index + 1;
            card[index].value = symbol + 1;
            card[index].suit = suit;
            card[index].symbol = symbol;
            
            switch (suit) {
                case Diamonds:
                    card[index].color = Red;
                    break;
                default: // If not a diamond
                    card[index].color = Black;
            }
            
            sprintf( card[index].cImage,"%d_of_%s", (symbol + 1), suitStrings[suit] );
        }
    }
    return card;
}

void shuffledeck(CARD *card)
{

    CARD swap[1];
    for (int i = 0; i < DECK_CNT; i++) {
        int r;
        while ( (r = rand() % DECK_CNT) == i);
        
        // swap logic
        swap[0] = card[i];
        card[i] = card[r];
        card[r] = swap[0];
    }
}
 



CARD * createPyramid()
{
    CARD *cards;

    /* Initial memory allocation */
    cards = (CARD *)malloc(sizeof(CARD) * PYRMD_CNT);         // Intro to memory allocatin
    //card = (CARD *)malloc(sizeof(CARD) * PYRMD_ROWS);
    cards[0].row = 0;
    
    cards[1].row = 1;
    cards[2].row = 1;
    
    cards[3].row = 2;
    cards[4].row = 2;
    cards[5].row = 2;
    
    cards[6].row = 3;
    cards[7].row = 3;
    cards[8].row = 3;
    cards[9].row = 3;
    
    cards[10].row = 4;
    cards[11].row = 4;
    cards[12].row = 4;
    cards[13].row = 4;
    cards[14].row = 4;
    
    cards[15].row = 5;
    cards[16].row = 5;
    cards[17].row = 5;
    cards[18].row = 5;
    cards[19].row = 5;
    cards[20].row = 5;
    
    cards[21].row = 6;
    cards[22].row = 6;
    cards[23].row = 6;
    cards[24].row = 6;
    cards[25].row = 6;
    cards[26].row = 6;
    cards[27].row = 6;
    
    return cards;
    
}

void dealDeckToPyramid(CARD * pyramid, CARD * cards)
{
    for (int i = 0; i < PYRMD_CNT; i++)
    {
        // retain pyramid row and use row to state card is used
        cards[i].row = pyramid[i].row;
        // copy card or pyramid card
        pyramid[i] = cards[i];
    }
}


void dealdeck(CARD *card)
{
    // Deal deck to two players
    CARD player1[DECK_CNT/2];               // half deck array for each player
    CARD player2[DECK_CNT/2];
    for (int i = 0, index = 0; i < DECK_CNT; i++)    // deal half deck to each
    {
        if ( (i % 2) == 0 ) {
            player1[index] = card[i];       // card to player1
            printf("%5s %5s of %-8s %d %d %s",
                   colorStrings[player1[index].color],
                   symbolStrings[player1[index].symbol], suitStrings[player1[index].suit],
                   player1[index].cID, player1[index].value, player1[index].cImage);
            
        } else {
            player2[index] = card[i];     // card to player2
            printf("\t\t\t");
            printf("%5s %5s of %-8s %d %d %s",
                   colorStrings[player2[index].color],
                   symbolStrings[player2[index].symbol], suitStrings[player2[index].suit],
                   player2[index].cID, player2[index].value, player2[index].cImage);
            printf("\n");
            index++;

        }

    }
    
}

/**
* Removes allocated deck (CARD *) from heap
*
* param  CARD *
* return void
*/
void freedeck(CARD *card)
{
    if (card != NULL)
        free(card);
}




void cards()
{
    // Setup 52 cards
    CARD card[DECK_CNT];
    for(int suit = Clubs; suit <= Spades; suit++)
    {     // Clubs, Diamonds, Hearts, Spades
        for(int symbol = Ace; symbol <= King; symbol++ )
        { // Ace, Two, Three ..., Queen, King
            int index = (suit * SYMBOL_CNT) + symbol;    // index equals: 0...12, 13...25, 26...38, 39...51
            card[index].cID = index + 1;
            card[index].value = symbol + 1;
            card[index].suit = suit;
            card[index].symbol = symbol;
        }
    }
   
    // Shuffle cards
    CARD swap[1];
    for (int i = 0; i < DECK_CNT; i++) {    // traverse through deck one time
        int r;
        while ( (r = rand() % DECK_CNT) == i); // repeat if r = i, don't swap with itself
     
        // swap logic
        swap[0] = card[i];    // current saved to swap
        card[i] = card[r];    // current changed with random
        card[r] = swap[0];    // random changed with swap
    }
   
    // Deal deck to two players
    CARD player1[DECK_CNT/2];        // half deck array for each player
    CARD player2[DECK_CNT/2];
    for (int i = 0; i < DECK_CNT/2; i++)  // deal half deck to each
    {
        int index = i * 2;
        player1[index] = card[index];    // card to player1
        player2[index] = card[index+1];   // card to player2
     
        // Two column print out
        printf("%5s of %-8s %d %d",
               symbolStrings[player1[index].symbol], suitStrings[player1[index].suit],
               player1[index].cID, player1[index].value);
     
        printf("\t\t");
        printf("%5s of %-8s %d %d",
               symbolStrings[player2[index].symbol], suitStrings[player2[index].suit],
               player2[index].cID, player2[index].value);
        printf("\n");
    }

}
    
void winner (){
      //Enter code to make 13
  }

void scoreKeeper(){
    //Code to keep point score
}
