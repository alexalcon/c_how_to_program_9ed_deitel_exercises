/**
 * File: exercise_4_37_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ Describe in general how you would remove any continue statement from a loop in 
 *                a program and replace that statement with some structured equivalent. Use the
 *                technique you developed here to remove the continue statement from the program 
 *                of Fig. 4.8.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 16-12-2025
 */

#include <stdio.h>

int main(void) {
    for (int count = 1; count <= 10; ++count) {
        if (count != 5) {
            printf("%d ", count);
        }
    } 

    printf("\nSkipped printing 5 without using continue.\n");

    return 0;
}
