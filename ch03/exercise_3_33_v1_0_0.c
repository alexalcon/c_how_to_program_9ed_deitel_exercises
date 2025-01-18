/**
 * File: exercise_3_33_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Hollow Square of Asterisks) Modify the program you wrote in the preceding exercise
 *              so that it prints a hollow square. For example, if your program reads a size of 5, 
 *              it should prin
 * 
 *                   *****
 *                   *   *
 *                   *   *
 *                   *   *
 *                   *****
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    // square size user input
    //---------------------------------------------------------------------
    int square_size;
    printf("%s", "Enter a square size between 1 and 20: ");
    scanf("%d", &square_size);

    // validate input
    while (square_size < 1 || square_size > 20) {
        printf("%s", "A square size between 1 and 20 must be entered: ");
        scanf("%d", &square_size);
    }
    //---------------------------------------------------------------------

    // processing phase
    // draw square
    //-----------------------------------
    // main logic 
    // matrix column filling logic
    //*********************************
    int row = 0;
    
    while(row < square_size) {
        int column = 0;
        
        while(column < square_size) {
            if (row == 0) { // first row
                printf("%s", "* ");
            }
            else if ( row == (square_size - 1) ) { // last row
                  printf("%s", "* ");
            }
            else if (column == 0) {
                  printf("%s", "* ");
            }
            else if ( column == (square_size -1) ) {
                  printf("%s", "* ");
            }
            else { // hollow square
                  printf("%s", "  ");
            }
            
            ++column; // move to the next column
        }
        puts("");

        ++row; // move to the next row
    }
    //*********************************
    //-----------------------------------

    return 0;
}

