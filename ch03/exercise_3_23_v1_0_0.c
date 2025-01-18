/**
 * File: exercise_3_23_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Find the Largest Number) Finding the largest number (i.e., the maximum of a 
 *                 group of numbers) is used frequently in computer applications. For example, a 
 *                 program that determines the winner of a sales contest would input the number of 
 *                 units sold by each salesperson. The salesperson who sells the most units wins 
 *                 the contest. Write a pseudocode program and then a program that uses scanf to 
 *                 input a series of 10 non-negative numbers and determines and prints the largest 
 *                 of the numbers. Your program should use three variables:
 *      
 *                      a) counter: A counter to count to 10 (i.e., to keep track of how many 
 *                         numbers have been input and to determine when all 10 numbers have been 
 *                         processed).
 *                      b) number: The current number input to the program.
 *                      c) largest: The largest number found so far.
 * -----------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter = 1; // number input counter
    int largest = 0; // assuming largest number is 0

    // processing phase
    // counter-controlled iteration
    while(counter <= 10) {
        int number;
        printf("%s", "Enter integer number: ");
        scanf("%d", &number);

        if (number > largest) {
            largest = number;
        }

        ++counter;
    }

    // termination result
    // show result 
    printf("%s%d\n", "\nThe largest number is: ", largest);

    return 0;
}