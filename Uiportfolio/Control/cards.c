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

    card = (CARD *)malloc(sizeof(CARD) * DECK_CNT);         // memory allocatin
    
    for(int suit = Clubs; suit <= Spades; suit++) { // Clubs, Diamonds, Hearts, Spades
        
        for(int symbol = Ace; symbol <= King; symbol++ ) {
            int index = (suit * SYMBOL_CNT) + symbol; // index equals: 0...12, 13...25, 26...38, 39...51
            card[index].cID = index + 1; // set index.CID to + 1 of the current index
            card[index].value = symbol + 1; // set index.value to +1 of the current symbol
            card[index].suit = suit; // set index.suit equal to suit
            card[index].symbol = symbol; // set index.symbol equal to the current symbol
            
            
            if(suit == Diamonds) { // if statement to check if Diamonds is red or black
                card[index].color = Red;
            } else {
                card[index].color = Black;

            }
            
            sprintf( card[index].cImage,"%d_of_%s", (symbol + 1), suitStrings[suit] );
        }
    }
    return card;
}

void shuffledeck(CARD *card) //shuffle deck function
{

    CARD swap[1];
    for (int i = 0; i < DECK_CNT; i++) { // for loop through total of deck
        int r; // new integer for the random
        while ( (r = rand() % DECK_CNT) == i); // while the random is divisable by the deck total and equals the index
        
        swap[0] = card[i]; // set temp swap variable to the current index of the card
        card[i] = card[r]; // set the current card index to the random card index
        card[r] = swap[0]; // set the random card index to the temporary variable we created before
    }
}

CARD * createStock() // creates stock
{
    
    CARD *cards; //creates new card variable
    cards = (CARD *)malloc(sizeof(CARD) *STK_CNT);   // set cards equal the current stack count of the cards
    
    return cards;
    
}

void freedeck(CARD *card) // free deck takes in a single card
{
    if (card != NULL) // if the card isn't null
        free(card); // free the card
}
 



CARD * createPyramidPattern() // creates the pattern needed for the pyramid
{
    CARD *cards; // create new cards variable

    cards = (CARD *)malloc(sizeof(CARD) * PYRMD_CNT); // set cards equal to the malloc of the size of the card
    
    //following code sets each cards index to their row
    
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
    
    return cards; //return the array of cards
    
}

void setDeckToPyramid(CARD * pyramid, CARD * cards) // sets the pyramid equal to the deck, takes in the pyramid array aswell as the cards array
{
    for (int i = 0; i < PYRMD_CNT; i++) // for loop through the entire pyramid array
    {
        // Card -> Pyramid variable by going through same index in array(swap)
        
        cards[i].row = pyramid[i].row; // sets card row equal to pyramid row
        pyramid[i] = cards[i]; // set pyramid index equal to card index
    }
}


