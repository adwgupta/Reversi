#ifndef OTHELLO_PRE_GAME_H
#define OTHELLo_PRE_GAME_H

#include "initialize.h"
#include "ascii.h"
/**
 * This libary is not being used as this version of the program
 * as this version has been created for termnials/ides which do not support ansi escape sequences
 * This is also the version you can run on command prompt
 * #include "colour.h"  
*/

//Name for the results txt file
#define resultsFile "othello-results.txt"
//Name for the instructions txt file
#define instructFile "instructions.txt"

//File pointers
FILE *fp;
FILE *fp2;

/**
 * Function prototypes
 *
 * 
Function to print out welcome in yellow */
void w1();
//Function to handle pre game text printing
void openingCredits(Player p1, Player p2);
//Function to print out the time that the game started along with the player's names
void welcome(FILE *out, Player p1, Player p2);
//Function to create the instructions txt file
void instructions();

#endif