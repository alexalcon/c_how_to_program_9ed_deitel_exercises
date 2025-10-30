/**
 * File: exercise_4_09_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Sum a Sequence of Integers) Write a program that sums a 
 *                 sequence of integers. Assume that the first integer read with 
 *                 scanf specifies the number of values remaining to be entered. 
 *                 Your program should read only one value each time scanf executes. 
 *                 A typical input sequence might be:
 *                      
 *                     5 100 200 300 400 500
 *    
 *                 where the 5 indicates that the next five values are to be summed.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 30-10-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━
    // processing phase
    // ━━━━━━━━━━━━━━━━
    //─────────────────────────────────────────────────────────────────────────────────────
    int n; // number of values to be sumed
    printf("%s", "Enter the number of integers to be summed followed by the integers: ");
    scanf("%d", &n); // read number of values to be sumed
    
    // counter-controlled iteration 
    // initialization phase: initialization of 'sum' variable  
    //                       declaration of 'value' variable
    for (int i = 1, sum = 0, value; i <= n; ++i) {
        scanf("%d", &value); // read next integer
        sum += value; // add it to sum
        
        // if last iteration, print the result
        if (i == n) {
            printf("%s%d\n", "The sum is: ", sum);
        }
    }
    //─────────────────────────────────────────────────────────────────────────────────────

    return 0;
}