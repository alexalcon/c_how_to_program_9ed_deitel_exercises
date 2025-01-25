/**
 * File: exercise_3_38_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Counting 7s) Write a program that reads an integer (5 digits or fewer) and 
 *              determines and prints how many digits in the integer are 7s.
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int number;
    printf("Enter a five digit (or fewer) integer: ");
    scanf("%d", &number);

    int counter; // 7's counter

    // processing phase
    while (number != 0) {
        int digit = number % 10;

        if (digit == 7) {
            ++counter;
        }

        number /= 10;
    }

    // termination phase
    printf("%s%d%s\n", "There are ", counter, " 7's.");
    
    return 0;
}