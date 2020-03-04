//
//  programming.c
//  Projects
//
//  Created by John Mortensen on 10/25/19.
//  Copyright © 2019 Mortensen,John. All rights reserved.
//

#include <stdio.h>
#include <strings.h>
#include "control.h"

// Programming Languages Data Definition
char *exeString[] = {"", "Just-in-Time (JIT)","Java-Virtual-Machine (JVM)","Byte Code", "Native Or Binary"};
char *langString[] = {"", "Object Oriented Programming (OOP)","Multi Purpose (MP)","Iterative", "" };
LANGUAGES blanklanguage = {"", "", "", NoEXE, NoLang};

// Temporary buffer
char displayArray[LINE_BUFFER_SIZE];  // buffer for display


// THis is initializing section for the table, comma is used to seperate data in struct
// Note the use of enum data, it is much easier to look at and better when choices are limited
LANGUAGES progLang[LINE_BUFFER_SIZE] = {
    {"C", "1972", "Dennis Ritchey", "", Native, Iterative},
    {"Objective-C", "1980s", "Brad Cox", "", Native, OOP},
    {"Python", "1989", "Guido van Rossum", "", JIT, OOP},
    {"Java", "1990s", "James Goslin", "", JVM, OOP},
    {"JavaScript", "1995", "Brendan Eich", "", JVM, MP},
    {"C#", "2000", "Anders Hejlsberg", "", ByteCode, MP},
};
LANGUAGES filteredLang[LINE_BUFFER_SIZE];


// progLanguages is called from my main menu
LANGUAGES* progLanguages()
{
    for (int i=0; i < LINE_BUFFER_SIZE; i++) {
        sprintf(progLang[i].search, "%s \t\t%-15s \n%s \n%s \n%s", progLang[i].yob, progLang[i].name, progLang[i].creator, exeString[progLang[i].exetype], langString[progLang[i].langtype] );
    }
    return progLang;
}

// progLanguages is called from my main menu
LANGUAGES* searchLanguages(char *searchTerm)
{
    // is there a search term?
    if (strlen(searchTerm) > 0)
    {
        // value that tracks index of matches in filtered list
        int found = 0;
        
        // This loop updates lines to filtered list that meet search criteria
        for (int i=0; i < LINE_BUFFER_SIZE; i++) {
            char* p;
            p = strstr(progLang[i].search, searchTerm);  // p points to address where term is found
            if (p) {
                // sending feedback message to driver that called this function
                filteredLang[found++] = progLang[i];
            }
        }
        
        // This loop blanks lines that have no match
        for (int i=found; i < LINE_BUFFER_SIZE; i++)
        {
            filteredLang[i] = blanklanguage;
        }
        
        // returns a filtered list
        return filteredLang;
    } else {
        // returns the  full list
        return progLang;
    }
}

