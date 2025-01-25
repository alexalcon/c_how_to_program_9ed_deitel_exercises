/**
 * File: exercise_3_37_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Detecting Multiples of 10) Write a program that prints 100 asterisks, one at a 
 *              time. After every tenth asterisk, print a newline character. [Hint: Count from 1 to
 *              100. Use the % operator to recognize each time the counter reaches a multiple of 
 *              10.]
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter = 1;

    // processing phase
    while (counter <= 100) {
        puts("*");

        if ( ((counter % 10) == 0) && (counter != 100) ) {
            puts("");
        }

        ++counter;
    }

    return 0;
}