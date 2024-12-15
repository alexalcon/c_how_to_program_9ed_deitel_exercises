/**
 * File: exercise_2_26_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Separating Digits in an Integer) Write a program that inputs one five-digit 
 *                 number, separates the number into its individual digits and displays the digits 
 *                 separated from one another by three spaces each. [Hint: Use combinations of 
 *                 integer division and the remainder operation.] For example, if the user types 
 *                 in 42139, the program should display:
 *                          4   2   1   3   9
 * -------------------------------------------------------------------------------------------------
 * Created on: 23-11-2023
 */

#include <stdio.h>

int main(void) {
    //  read an integer number from the user
    int number = 0;
    printf("%s", "Enter a 5-digit integer number: ");
    scanf("%d", &number);

    // main logic
    //*************************
    int d1, d2, d3, d4, d5;
    d1 = (number/10000) % 10;
    d2 = (number/1000) % 10;
    d3 = (number/100) % 10;
    d4 = (number/10) % 10;
    d5 = number % 10;
    //*************************

    // display result
    printf("%d\t%d\t%d\t%d\t%d", d1, d2, d3, d4, d5);

    return 0;
} // end function main


/**************************************************************************
 * Side Note:                                                             *
 * The mathematical theory underpinning the main logic is rooted in a     *
 * fundamental topic in Number Theory, specifically the concept of        *
 * divisibility, and more precisely, the Division Algorithm. This theory  *
 * serves as the foundation for understanding how integers relate through *
 * division, remainders, and quotients.                                   *
 **************************************************************************/