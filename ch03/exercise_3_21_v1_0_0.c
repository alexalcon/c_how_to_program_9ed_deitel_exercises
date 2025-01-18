/**
 * File: exercise_3_21_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Predecrementing vs. Postdecrementing) Write a program that demonstrates the 
 *              difference between predecrementing and postdecrementing using the decrement 
 *              operator --.
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    int c = 7; // number to test

    // demonstrate postfix decrement operator
    printf("c before postdecrement: %d\n", c);   // prints 7
    printf("      postdecrementing: %d\n", c--); // prints 7 
    printf(" c after postdecrement: %d\n", c);   // prints 6

    puts("");

    // demonstrate prefix decrement operator
    c = 7;
    printf("c before predecrement: %d\n", c);   // prints 7
    printf("      predecrementing: %d\n", --c); // prints 6 
    printf(" c after predecrement: %d\n", c);   // prints 6

    return 0;
}