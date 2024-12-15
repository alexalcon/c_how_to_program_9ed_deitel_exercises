/**
 * File: exercise_2_17_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------------------------------------------------
 * Description: (Displaying Values with printf) Write a program that displays the numbers 1 to 4
 *              on the same line. Write the program using the following methods.
 *                  a) Using one printf statement with no conversion specifications.
 *                  b) Using one printf statement with four conversion specifications.
 *                  c) Using four printf statements.
 * -----------------------------------------------------------------------------------------------
 * Created on: 17-11-2023
 */

#include <stdio.h>

int main(void) {
    // a) using one printf statement with no conversion specifications
    printf("%s", "1 2 3 4\n");

    // b) using one printf statement with four conversion specifications
    printf("%d %d %d %d\n", 1, 2, 3, 4);

    // c) using four printf statements
    printf("%d ", 1);  // print '1' followed by a space
    printf("%d ", 2);  // print '2' followed by a space
    printf("%d ", 3);  // print '3' followed by a space
    printf("%d", 4);   // print '4' followed by a newline

    return 0;
} // end function main 
        