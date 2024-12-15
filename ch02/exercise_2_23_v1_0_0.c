/**
 * File: exercise_2_23_v1_0_0.c                                      
 * Author: Alex Alcón     
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------------------------  
 * Description: (Multiples) Write a program that reads two integers and determines and displays 
 *              whether the first is a multiple of the second. Use the remainder operator.      
 * ----------------------------------------------------------------------------------------------  
 * Created on: 17-11-2023                                                                       
 */

#include <stdio.h>

int main(void) {
    // read two integers from the user
    //---------------------------------------
    int number1 = 0, number2 = 0;

    printf("%s", "Enter first integer: ");
    scanf("%d", &number1);
    
    printf("%s", "Enter second integer: ");
    scanf("%d", &number2);
    //---------------------------------------

    // main logic
    //******************************************************
    if (number1 % number2 == 0) {
        printf("%d is multiple of %d.", number1, number2);
    }
    if (number2 % number1 == 0) {
        printf("%d is multiple of %d.", number2, number1);
    }
    //******************************************************

    return 0;
} // end function main