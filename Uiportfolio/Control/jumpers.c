//
//  jumpers.c
//  portfolio
//
//  Created by Vo, Anthony on 9/5/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include "control.h"
#include "stdio.h"

// Log buffera
OUTLOG jumperlog[FILE_BUFFER_SIZE];

OUTLOG* jumpers(int jumps, char *animal) {
    int j = 0;
    sprintf(jumperlog[j++].message, "Jumps %d, Animal %s", jumps, animal);
    for (int i = 0; i < jumps; i++)
    {
        sprintf(jumperlog[j++].message, "%d little %s jumping on the bed", jumps - i, animal);
        sprintf(jumperlog[j++].message, "One fell off and broke their head");
        sprintf(jumperlog[j++].message, "Mama called Doctor and Doctor said:");
        sprintf(jumperlog[j++].message, "No more %s s jumping on the bed", animal);
    }
    
    return jumperlog;
}
