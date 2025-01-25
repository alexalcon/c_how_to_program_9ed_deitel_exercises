/**
 * File: exercise_3_34_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Palindrome Tester) A palindrome is a number or a text phrase that reads the same
 *              backward as forward. For example, each of the following five-digit integers is a 
 *              palindrome: 12321, 55555, 45554 and 11611. Write a program that reads in a five 
 *              digit integer and determines whether or not it’s a palindrome. [Hint: Use the 
 *              division and remainder operators to separate the number into its individual digits.]
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int number;
    printf("%s", "Enter a 5 digit integer number: ");
    scanf("%d", &number);

    // processing phase
    //----------------------------------------------------------
    // main logic
    // comparing extreme numbers
    if ( (number % 10) == (number / 10000) ) {
        if ( ((number / 10) % 10) == ((number /1000) % 10) ) {
            printf("\n%d%s", number, " is a palindrome.");
        }
    }
    else {
        printf("\n%d%s\n", number, " is not a palindrome.");
    }
    //----------------------------------------------------------
    
    return 0;
}