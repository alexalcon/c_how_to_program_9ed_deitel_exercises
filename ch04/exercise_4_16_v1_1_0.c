/**
 * File: exercise_4_16_v1_1_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Triangle-Printing Program) Write a program that prints the following patterns 
 *                 separately, one below the other. Use for loops to generate the patterns. All 
 *                 asterisks (*) should be printed by a single printf statement of the form 
 *                 printf("%s", "*"); (this causes the asterisks to print side-by-side). 
 *                 [Hint: The last two patterns require that each line begin with an appropriate 
 *                 number of blanks.]
 *                                                                                          
 *                      (A)                 (B)                 (C)                 (D)
 *                      *                   **********          **********                   *
 *                      **                  *********            *********                  **
 *                      ***                 ********              ********                 *** 
 *                      ****                *******                *******                ****
 *                      *****               ******                  ******               *****
 *                      ******              *****                    *****              ******
 *                      *******             ****                      ****             *******
 *                      ********            ***                        ***            ********
 *                      *********           **                          **           *********
 *                      **********          *                            *          **********
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 07-11-2025
 */

#include <stdio.h>

int main(void) {
    int n = 10; // number of rows

    // pattern a) - increasing stars
    printf("Pattern a)\n");
    for (int i = 1; i <= n; ++i) {
        printf("-");
    }
    printf("\n");
    for (int row = 1; row <= n; ++row) {
        for (int column = 1; column <= n; ++column) {
            if (column <= row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    // pattern b) - decreasing stars
    printf("Pattern b)\n");
    for (int i = 1; i <= n; ++i) {
        printf("-");
    }
    printf("\n");
    for (int row = 1; row <= n; ++row) {
        for (int column = n; column >= 1; --column) {
            if (column >= row) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    // pattern c) - right-aligned decreasing stars
    printf("Pattern c)\n");
    for (int i = 1; i <= n; ++i) {
        printf("-");
    }
    printf("\n");
    for (int row = 1; row <= n; ++row) {
        // spaces before stars
        for (int column = 1; column < row; ++column) {
            printf(" ");
        }
        // stars
        for (int column = n; column >= row; --column) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("\n");
    
    // pattern d) - right-aligned increasing stars
    printf("Pattern d)\n");
    for (int i = 1; i <= n; ++i) {
        printf("-");
    }
    printf("\n");
    for (int row = 1; row <= n; ++row) {
        // spaces before stars
        for (int column = n; column > row; --column) {
            printf(" ");
        }
        // stars
        for (int column = 1; column <= row; ++column) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}