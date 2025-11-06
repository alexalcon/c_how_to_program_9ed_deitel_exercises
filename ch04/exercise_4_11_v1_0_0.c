/**
 * File: exercise_4_11_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Find the Smallest) Write a program that finds the smallest 
 *                 of several integers. Assume that the first value read specifies 
 *                 the number of values remaining.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 06-11-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    //─────────────────────────────────────────────────────────────────────
    // integer limit inputs entered byv the user 
    int integer; 
    printf("%s", "Enter integr limit: ");
    scanf("%d", &integer);
    
    int hold = integer; // hold up variable to evaluate 
    // the switch controlling expression 
    
    int smallest = integer; // assume smallest is the first integer input
                            // just in case 0 or 1 input was entered
    //─────────────────────────────────────────────────────────────────────
    
    // ━━━━━━━━━━━━━━━━
    // processing phase  
    // ━━━━━━━━━━━━━━━━
    // check out the limit input entered by the user
    switch (hold) {
        case 0: // 0 limit input was entered
            puts("\nNo integers were input.");
            break;
        
        case 1: // 1 limit input was entered 
            printf("%s", "\nEnter an integer: ");
            scanf("%d", &integer);

            printf("The smallest integer is %d: \n", integer);
            
            break;
    
        default: // limit input major to one was entered 
            // main logic 
            // counter-controlled iteration to keep track of the smallest integer
            puts(""); 
            for (int counter = 0 ; counter < hold ; ++counter) {
                printf("%s", "Enter an integer: ");
                scanf("%d", &integer);

                // assume smallest is the first integer input
                // after indicating more than 1 input
                // this is a single "trigger" assignment 
                if (counter == 0) {
                    smallest = integer;
                }

                // check for smaller integers if applied
                if (integer < smallest) {
                    smallest = integer;
                }
            }

            // ━━━━━━━━━━━━━━━━━
            // termination phase  
            // ━━━━━━━━━━━━━━━━━
            printf("\nThe smallest integer is: %d\n", smallest);

            break;
    }

    return 0;
}