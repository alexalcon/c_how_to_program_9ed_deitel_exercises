/**
 * File: exercise_3_40_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Multiples of 2 with an Infinite Loop) Write a program that keeps printing the 
 *              multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your loop should
 *              not terminate (i.e., you should create an infinite loop). What happens when you run
 *              this program?
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    int number = 2;

    while (1) {
        printf("%d\n", number); 
        number*=2; // arithmetic overflow
    }

    return 0;
}