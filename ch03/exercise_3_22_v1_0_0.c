/**
 * File: exercise_3_22_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Printing Numbers from a Loop) Write a program that utilizes looping to print the 
 *              numbers from 1 to 10 side by side on the same line with three spaces between 
 *              numbers.
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter = 1;

    // processing phase
    // counter-controlled iteration
    while (counter <= 10) {
        printf("%d   ", counter);

        ++counter;
    }
    puts("");
    
    return 0;
}