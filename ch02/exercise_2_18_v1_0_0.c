/**
 * File: exercise_2_18_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------------------------------------------------
 * Description: (Comparing Integers) Write a program that reads two integers from the user then
 *              displays the larger number followed by the words “is larger.” If the numbers are
 *              equal, display the message “These numbers are equal.” Use only the 
 *              single-selection form of the if statement you learned in this chapter.
 * -----------------------------------------------------------------------------------------------
 * Created on: 17-11-2023
 */

#include <stdio.h>

int main(void) {
    // read two integers from the user
    //-------------------------------------------------
    int num1 = 0, num2 = 0;

    printf("%s", "Enter the first integer number: ");
    scanf("%d", &num1);
    
    printf("%s", "Enter the second integer number: ");
    scanf("%d", &num2);
    //-------------------------------------------------

    // main logic - non-exclusive conditionals 
    // trichotomy law
    //***********************************************
    if (num1 > num2) {
        printf("%d is major than %d.", num1, num2);
    }
    if (num2 > num1) {
        printf("%d is major than %d.", num2, num1);
    }
    if (num1 == num2) {
        printf("%d is equal to %d.", num1, num2);
    }
    //***********************************************

    return 0;
} // end function main 