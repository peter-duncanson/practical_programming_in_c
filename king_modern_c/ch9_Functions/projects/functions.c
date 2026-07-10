// =============================================================================
// C Programming: A Modern Approach - K.N. King
// Chapter 8: Functions - Projects
// 06/09/26
// =============================================================================
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#incldue "functions.h"

// =============================================================================
// (2) Modify Programming Project 5 from Chapter 5 so that it uses a function to
// compute the amouint of income tax. When passed an amount of taxable income,
// the function will return the tax due.
// -> From Chapter 5:
//      In one state, single residents are subject to the following income tax:
//          
//          Income:             Amount of tax:
//          < 750               1% of income
//          750-2250            7.50   + 2% of amount over 750
//          2250-3750           37.50  + 3% of amount over 2250
//          3750-5250           82.50  + 4% of amount over 3750
//          5250-7000           142.50 + 5% of amount over 5250
//          > 7000              230    + 6% of amount over 7000
//
//      Write a program that asks the user to enter the amount of taxable
//      income, then displays the tax due.
// =============================================================================

// =============================================================================
// (3) Modidy Programming Project 9 from Chapter 8 so that it includes the
// following functions:
//
// void generate_random_walk(char walk[10][10]);
// void print_array(char_walk[10][10]);
// 
// main first calls generate_random_walk, which initializes the array to contain
// '.' characters and then replaces some of these characters with the letters
// 'A' through 'Z' as described in the original project. main then calls
// print_array to display the array on the screen.
// -> From Chapter 8:
//          - Indexing randomly moves up, down, right, or left.
//          - If a spot is occupied, try to choose another, if trapped, exit.
// =============================================================================

// =============================================================================
// (4) Modify Programming Project 16 from Chapter 8 so that it incluces the
// following functions:
//
// void read_word(int counts[26]);
// bool equal_array(int counts1[26], int counts2[26]);
//
// main will call read_word twice, once for each of the two words entered by the
// user. As is reads a word, read_word will use the letters in the word to
// update the counts array, as described in the original project. (main will
// declare two arrays, once for each word. These arrays are usedto track how
// many times each letter occurs in the words.) main will then call equal_array,
// passing it the two arrays. equal_array will return ttrue if the elements in
// the two arrays are identical (indicating that the words are anagrams) and
// false otherwise.
// =============================================================================

// =============================================================================
// (5) Modiy Programming Project 17 from Chapter 8 so that it includes the
// following functions:
// 
// void create_magic_square(char_magic_square[n][n], int n);
// void print_magic_square(char_magic_square[n][n], int n);
// =============================================================================

// =============================================================================
// (6) Write a function that computes the value of the following polynomial:
// 3x^2 + 2x^4 - 5x^3 - x^2 + 7x - 6
// Write a program that asks the user to enter a value for x, calls the function
// to compute the value of the polynomial, and then diaplays the value returned
// by the function.
// =============================================================================
