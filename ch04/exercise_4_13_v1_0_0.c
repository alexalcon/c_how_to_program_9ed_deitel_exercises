/**
 * File: exercise_4_13_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: (Calculating the Product of Odd Integers) Write a program that 
 *              calculates and prints the product of the odd integers from 1 to 15.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 06-11-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int multiplier = 1; 

    // processing phase
    // main logic
    // counter-controlled iteration to multiply
    // odd integers from 1 to 15
    for (int counter = 1 ; counter <= 15 ; ++counter) {
        if(counter % 2 == 1) {
            multiplier *= counter; 
        }
    }     

    // termination phase
    printf("The product is: %d\n", multiplier);

    return 0;
}
