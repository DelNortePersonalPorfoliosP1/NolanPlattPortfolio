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

    card = (CARD *)malloc(sizeof(CARD) * DECK_CNT);         // Intro to memory allocatin
    
    for(int suit = Clubs; suit <= Spades; suit++) {
        
        for(int symbol = Ace; symbol <= King; symbol++ ) {
            int index = (suit * SYMBOL_CNT) + symbol;
            card[index].cID = index + 1;
            card[index].value = symbol + 1;
            card[index].suit = suit;
            card[index].symbol = symbol;
            
            
            if(suit == Diamonds) {
                card[index].color = Red;
            } else {
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
        
        swap[0] = card[i];
        card[i] = card[r];
        card[r] = swap[0];
    }
}

CARD * createStock()
{
    
    CARD *cards;
    cards = (CARD *)malloc(sizeof(CARD) *STK_CNT);         
    
    return cards;
    
}

void freedeck(CARD *card)
{
    if (card != NULL)
        free(card);
}
 



CARD * createPyramidPattern()
{
    CARD *cards;

    cards = (CARD *)malloc(sizeof(CARD) * PYRMD_CNT);
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

void setDeckToPyramid(CARD * pyramid, CARD * cards)
{
    for (int i = 0; i < PYRMD_CNT; i++)
    {
        // Card -> Pyramid variable by going through same index in array(swap)
        
        cards[i].row = pyramid[i].row;
        pyramid[i] = cards[i];
    }
}


