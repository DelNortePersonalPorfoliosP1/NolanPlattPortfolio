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


@synthesize cardDeck, playerCards, shuffleButton;


- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    cards = createdeck(); // create new deck
    shuffleDeck(cards); // shuffle & randomize cards
       
       pyramid = createPyramidPattern(); // create pyramid pattern using previous deck
       setDeckToPyramid(pyramid, cards);
       
    
    
    for (int i = 0; i < PYRMD_CNT; i++){
           NSString *pId = [NSString stringWithFormat:@"%s.png" , pyramid[i].cImage] ;

           switch(i){
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

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    printf("Touches began");
   
}


-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {


}

- (IBAction)shuffleButtonClicked:(id)sender {
    cards = createdeck(); // create new deck
       shuffleDeck(cards); // shuffle & randomize cards
          
          pyramid = createPyramidPattern(); // create pyramid pattern using previous deck
          setDeckToPyramid(pyramid, cards);
          
       
       
       for (int i = 0; i < PYRMD_CNT; i++){
              NSString *pId = [NSString stringWithFormat:@"%s.png" , pyramid[i].cImage] ;

              switch(i){
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

                                     
