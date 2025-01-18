/**
 * File: exercise_3_26_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Find the Two Largest Numbers) Using an approach similar to Exercise 3.23, find 
 *                 the two largest values of the 10 numbers. You may input each number only once. 
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter = 1;        // number input counter
    int largest = 0;        // assuming largest is 0
    int second_largest = 0; // assuming second largest is 0
    
    // processing phase
    // counter-controlled iteration
    while(counter <= 10) {
        int number;
        printf("%s ", "Enter integer number: ");
        scanf("%d", &number);

        // main logic
        // update largest and second largest number
        if(number > largest) { // largest number is reached out (same as exercise 3.23)
            second_largest = largest; // move the old largest to second largest
            largest = number;         // update largest number
        } 
        else if(number > second_largest) { // a second largest number is reached out
            second_largest = number;       // update second largest number if applicable

        }

        ++counter;
    }

    // termination phase
    // output the two largest numbers
    printf("%s%d", "\nThe largest number is: ", largest);
    printf("%s%d", "\nThe second largest number is: ", second_largest);

    return 0;
}