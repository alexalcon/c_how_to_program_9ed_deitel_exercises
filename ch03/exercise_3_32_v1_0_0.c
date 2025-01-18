/**
 * File: exercise_3_32_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Square of Asterisks) Write a program that reads in the side of a square and then 
 *              prints that square out of asterisks. Your program should work for squares of all 
 *              side sizes between 1 and 20. For example, if your program reads a size of 4, it 
 *              should print
 * 
 *                   ****
 *                   ****
 *                   ****
 *                   **** 
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    // square size user input
    //---------------------------------------------------------------------
    int square_size;
    printf("%s", "Enter a square size between 1 and 20: ");
    scanf("%d", &square_size);

    // validate input
    while (square_size < 1 || square_size > 20) {
        printf("%s", "A square size between 1 and 20 must be entered: ");
        scanf("%d", &square_size);
    }
    //---------------------------------------------------------------------

    // processing phase
    // draw square
    //-----------------------------------
    // main logic 
    // matrix column filling logic
    //*********************************
    int row = 0;
    
    while(row < square_size) {
        int column = 0;
        
        while(column < square_size) {
            printf("%s", "* ");
            ++column; // move to the next column
        }
        puts("");

        ++row; // move to the next row
    }
    //*********************************
    //-----------------------------------

    return 0;
}