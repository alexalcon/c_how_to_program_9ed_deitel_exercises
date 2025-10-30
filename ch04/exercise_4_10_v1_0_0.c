/**
 * File: exercise_4_10_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Average a Sequence of Integers) Write a program that calculates 
 *                 and prints the average of several integers. Assume the last value 
 *                 read with scanf is the sentinel 9999. A typical input sequence 
 *                 might be:
 *    
 *                     10 8 11 7 9 9999
 *    
 *                 indicating that the average of all the values preceding 9999 
 *                 is to be calculated.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 30-10-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    int total = 0; // sum of input values
    int counter = 0; // number of input values
    
    // ━━━━━━━━━━━━━━━━
    // processing phase
    // ━━━━━━━━━━━━━━━━
    //──────────────────────────────────────────────────────────────
    int value; // current input value
    printf("%s", "Enter integers to be averaged (9999 to end): ");
    scanf("%d", &value); // read first value
    
    // sentinel-controlled iteration
    while (value != 9999) {
        total += value; // add value to total
        ++counter; // increment counter
        
        scanf("%d", &value); // read next value
    }
    //──────────────────────────────────────────────────────────────
    
    // ━━━━━━━━━━━━━━━━━
    // termination phase
    // ━━━━━━━━━━━━━━━━━
    // calculate and print final result
    if (counter == 0) {
        printf("%s\n", "No values were entered.");
    }
    else {
        printf("%s%.2f\n", "The average is: ", (double)(total) / counter);
    }
}