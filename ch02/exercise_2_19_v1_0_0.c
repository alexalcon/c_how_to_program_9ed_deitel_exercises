/**
 * File: exercise_2_19_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Largest Value and Smallest Value) Write a program that inputs three different 
 *                 integers from the keyboard, then displays, the smallest and the largest of these 
 *                 numbers. Use only the single-selection form of the if statement you learned in 
 *                 this chapter. 
 * -------------------------------------------------------------------------------------------------
 * Created on: 17-11-2023
 */

#include <stdio.h>

int main(void) {
    // read three different integers from the user
    int num1 = 0, num2 = 0, num3 = 0;
    printf("%s", "Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // main logic - non-exclusive conditionals
    //******************************************
    int largest, smallest;

    // initial assumption
    /**
    * this statement is the same as:
    *   smallest = num1;
    *   largest = num1;
    */
    largest = smallest = num1; 

    // check against second number
    if (num2 > largest) {
        largest = num2;
    }
    if (num2 < smallest) {
        smallest = num2;
    }

    // check against third number
    if (num3 > largest) {
        largest = num3;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    //******************************************

    // display results
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
} // end function main 