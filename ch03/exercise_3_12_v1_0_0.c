/**
 * File: exercise_3_12_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------
 * Description: What does the following program print?
 * -----------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    int x = 1;
    int total = 0;

    while (x <= 10) {
        int y = x * x;
        printf("%d\n", y);
        total += y;
        ++x; 
    } // end while

    printf("Total is %d\n", total);

    return 0;
} // end main