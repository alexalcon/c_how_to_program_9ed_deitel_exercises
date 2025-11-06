/**
 * File: exercise_4_12_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: (Calculating the Sum of Even Integers) Write a program that 
 *              calculates and prints the sum of the even integers from 2 to 30.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 06-11-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int sum = 0; 

    // processing phase
    // main logic
    // counter-controlled iteration to sum
    // even integers from 2 to 30
    for (int counter = 2 ; counter <= 30 ; ++counter) {
        if(counter % 2 == 0) {
            sum += counter; 
        }
    } 

    // termination phase
    printf("The sum is: %d\n", sum);

    return 0;
}
