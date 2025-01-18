/**
 * File: exercise_3_28_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------
 * Description: What does the following program print?
 * -----------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    int count = 1; // initilize count

    while (count <= 10) { // loop 10 times
        // output line of text 
        /**
         * - if count % 2 evaluates to 1 (non-zero), 
         *   the condition is true and "****" is printed.
         * - if count % 2 evaluates to 0, the condition 
         *   is false, and "++++++++" is printed.
         */
        puts((count % 2) ? "****" : "++++++++");
        ++count; // increment count
    } // end while

    return 0;
} // end function main

