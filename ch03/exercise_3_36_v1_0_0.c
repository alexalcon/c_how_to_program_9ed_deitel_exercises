/**
 * File: exercise_3_36_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (How Fast Is Your Computer?) How can you determine how fast your own computer 
 *              operates? Write a program with a while loop that counts from 1 to 1,000,000,000, 
 *              incrementing by 1 during each iteration of the loop. Every time the count reaches a 
 *              multiple of 100,000,000, print that number on the screen. Use your watch to time how
 *              long each 100 million iterations of the loop takes. [Hint: Use the remainder 
 *              operator to recognize each time the counter reaches a multiple of 100,000,000.]
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter= 1;

    // processing phase
    while (counter <= 1000000000) {
        if ( (counter % 100000000 ) == 0 ) {
            printf("%s%d\n", "Multipe of 100000000: ", counter);
        }

        ++counter;
    }

    return 0;
}