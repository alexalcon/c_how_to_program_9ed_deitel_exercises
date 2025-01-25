/**
 * File: exercise_3_39_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ----------------------------------------------------------------------------------------------
 * Description: (Checkerboard Pattern of Asterisks) Write a program that displays the following 
 *              checkerboard pattern:
 * 
 *                  * * * * * * * *
 *                   * * * * * * * *
 *                  * * * * * * * *
 *                   * * * * * * * *
 *                  * * * * * * * *
 *                   * * * * * * * *
 *                  * * * * * * * *
 *                   * * * * * * * *
 *          
 *              Your program must use only three output statements, one of each of the following
 *              forms:
 * 
 *                  printf("%s", "* ");
 *                  printf("%s", " ");
 *                  puts(""); // outputs a newline
 * ----------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int size = 8;
    int row = 0;

    // processing phase
    // main logic
    // matrix column filling logic
    while (row < size) {
        int column = 0;

        if (row % 2 == 1) { // check for an odd row
            printf("%s", " "); // add an initial space
        }

        while (column < size) {
            printf("%s", "* ");
            column++; // move to the next column
        }

        puts("");

        ++row; // move to the next row
        
    }

    return 0;
}