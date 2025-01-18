/**
 * File: exercise_3_29_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------
 * Description: What does the following program print? 
 * -----------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    int row = 10; // initialize row

    while(row >= 1) { // loop until row < 1
        int column = 1; // set column to 1 as iteration begins

        while(column <= 10) { // loop ten times
            printf("%s", (row % 2) ? "<" : ">"); // output
            ++column; // increment column
        } // end inner while

        --row; // decremenrt row
        puts(""); // begin new output line 
    } // end outer line 

    return 0;
} // end function main