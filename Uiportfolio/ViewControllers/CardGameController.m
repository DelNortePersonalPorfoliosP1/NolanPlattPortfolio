//
//  CardGameController.m
//  Uiportfolio
//
//  Created by Platt, Nolan on 2/3/20.
//  Copyright © 2020 NP. All rights reserved.
//

#import "CardGameController.h"

#include <string.h>
#include "control.h"

@implementation CardGameController


@synthesize cardDeck, playerCards, shuffleButton, scoreLabel;


- (void)viewDidLoad {
    [super viewDidLoad];
    
   
    
    
    
    score = 28; // set score to original(starting) score
    cards = createdeck(); // create new deck
    shuffledeck(cards); // shuffle & randomize cards
       
       pyramid = createPyramidPattern(); // create pyramid pattern using previous deck
    stock = createStock();

       setDeckToPyramid(pyramid, cards);


   for (int i = 0; i < PYRMD_CNT; i++){ // for loop for the amount in the pyramid
                NSString *pId = [NSString stringWithFormat:@"%s.png" , pyramid[i].cImage] ; // create new string to match each individual photo of the card

                switch(i){ // switch statement of the for loop index
                        
                        // the following are cases for each index in the integer i to set the image of each card
               case 0:
                   [self.c11 setImage:[UIImage imageNamed:pId]];
                   break;
               case 1:
                   [self.c21 setImage:[UIImage imageNamed:pId]];
                   break;
               case 2:
                   [self.c22 setImage:[UIImage imageNamed:pId]];
                   break;
               case 3:
                   [self.c31 setImage:[UIImage imageNamed:pId]];
                   break;
               case 4:
                   [self.c32 setImage:[UIImage imageNamed:pId]];
                   break;
               case 5:
                   [self.c33 setImage:[UIImage imageNamed:pId]];
                   break;
               case 6:
                   [self.c41 setImage:[UIImage imageNamed:pId]];
                   break;
               case 7:
                   [self.c42 setImage:[UIImage imageNamed:pId]];
                   break;
               case 8:
                   [self.c43 setImage:[UIImage imageNamed:pId]];
                   break;
               case 9:
                   [self.c44 setImage:[UIImage imageNamed:pId]];
                   break;
               case 10:
                   [self.c51 setImage:[UIImage imageNamed:pId]];
                   break;
               case 11:
                   [self.c52 setImage:[UIImage imageNamed:pId]];
                   break;
               case 12:
                   [self.c53 setImage:[UIImage imageNamed:pId]];
                   break;
               case 13:
                   [self.c54 setImage:[UIImage imageNamed:pId]];
                   break;
               case 14:
                   [self.c55 setImage:[UIImage imageNamed:pId]];
                   break;
               case 15:
                   [self.c61 setImage:[UIImage imageNamed:pId]];
                   break;
               case 16:
                   [self.c62 setImage:[UIImage imageNamed:pId]];
                   break;
               case 17:
                   [self.c63 setImage:[UIImage imageNamed:pId]];
                   break;
               case 18:
                   [self.c64 setImage:[UIImage imageNamed:pId]];
                   break;
               case 19:
                   [self.c65 setImage:[UIImage imageNamed:pId]];
                   break;
               case 20:
                   [self.c66 setImage:[UIImage imageNamed:pId]];
                   break;
               case 21:
                   [self.c71 setImage:[UIImage imageNamed:pId]];
                   break;
               case 22:
                   [self.c72 setImage:[UIImage imageNamed:pId]];
                   break;
               case 23:
                   [self.c73 setImage:[UIImage imageNamed:pId]];
                   break;
               case 24:
                   [self.c74 setImage:[UIImage imageNamed:pId]];
                   break;
               case 25:
                   [self.c75 setImage:[UIImage imageNamed:pId]];
                   break;
               case 26:
                   [self.c76 setImage:[UIImage imageNamed:pId]];
                   break;
               case 27:
                   [self.c77 setImage:[UIImage imageNamed:pId]];
                   break;
              

           }
     
       }
     
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event { // when mouse touches start
    
    // Check if card at lowest point of pyramid matches with the card at the top of stack to create a number of 13, if it doesn't then the next card in the stock is revealed.
    
    
    
    
    
   
     
     
}

-(void)buildStock {
    
    freedeck(cards); // calls the freedeck function with an arrray of cards
    cards = createdeck(); // creates a new deck
    shuffledeck (cards);
    
    stock = createStock();
    
   // printf("First stock: %c", stock[0]);
    
    
    
}

-(void)setCurrentStockImage {
    // Set image of current index in the stock array of the stock UIImage
    
    
    // (not working)
    
    for (int i = 0; i < stock; i++){ // for loop for the amount in the stock
      //  [self.stock setImage:[UIImage imageNamed:stock[i]]]
    }


    
}

-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
// when mouse stops touching something

    UITouch *touch = [touches anyObject];
    
    // Store  new point as a touches ended in lastPoint
    self.lastPoint = [touch locationInView:self.view];
    
    // Calc swipeVector between touch began and touch end
    CGPoint swipeVector = CGPointMake(self.lastPoint.x - self.firstPoint.x, self.lastPoint.y - self.firstPoint.y);
    
    NSLog(@"%f,%f", swipeVector.x, swipeVector.y); // log x and y of the swipeVector
    
    [self.view setUserInteractionEnabled:YES];
    
}


- (IBAction)shuffleButtonClicked:(id)sender {
    cards = createdeck(); // create new deck
       shuffledeck(cards); // shuffle & randomize cards
          
          pyramid = createPyramidPattern(); // create pyramid pattern using previous deck
          setDeckToPyramid(pyramid, cards); // set the new deck to the pyramid
          
       
       
       for (int i = 0; i < PYRMD_CNT; i++){ // for loop for the amount in the pyramid
              NSString *pId = [NSString stringWithFormat:@"%s.png" , pyramid[i].cImage] ; // create new string to match each individual photo of the card

              switch(i){ // switch statement of the for loop index
                      
                      // the following are cases for each index in the integer i to set the image of each card
                  case 0:
                      [self.c11 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 1:
                      [self.c21 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 2:
                      [self.c22 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 3:
                      [self.c31 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 4:
                      [self.c32 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 5:
                      [self.c33 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 6:
                      [self.c41 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 7:
                      [self.c42 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 8:
                      [self.c43 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 9:
                      [self.c44 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 10:
                      [self.c51 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 11:
                      [self.c52 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 12:
                      [self.c53 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 13:
                      [self.c54 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 14:
                      [self.c55 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 15:
                      [self.c61 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 16:
                      [self.c62 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 17:
                      [self.c63 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 18:
                      [self.c64 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 19:
                      [self.c65 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 20:
                      [self.c66 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 21:
                      [self.c71 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 22:
                      [self.c72 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 23:
                      [self.c73 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 24:
                      [self.c74 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 25:
                      [self.c75 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 26:
                      [self.c76 setImage:[UIImage imageNamed:pId]];
                      break;
                  case 27:
                      [self.c77 setImage:[UIImage imageNamed:pId]];
                      break;
                
              }
        
          }
}

@end

                                     
