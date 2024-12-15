/**
 * File: exercise_2_22_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Odd or Even) Write a program that reads an integer and determines and displays
 *              whether it’s odd or even. Use the remainder operator. An even number is a multiple
 *              of two. Any multiple of two leaves a remainder of zero when divided by 2.
 * -------------------------------------------------------------------------------------------------
 * Created on: 17-11-2023
 */

#include <stdio.h>

int main(void) {
    // read an integer number from the user
    int number = 0;
    printf("%s", "Enter the integer number: ");
    scanf("%d", &number);

    // main logic
    //********************************************
    if (number % 2 == 0) {
        printf("%d is an even number.", number);
    }
    if (number % 2 == 1) {
        printf("%d is an odd number.", number);
    }
    //********************************************

    return 0;
} // end function main