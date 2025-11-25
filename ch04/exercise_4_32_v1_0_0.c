/**
 * File: exercise_4_32_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Modified Diamond-Printing Program) Modify the program you wrote in Exercise 4.31 
 *                 to read an odd number in the range 1 to 19 to specify the number of rows in the 
 *                 diamond. Your program should then display a diamond of the appropriate size.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 04-12-2025
 */

#include <stdio.h>

int main(void) {
    /* initialization phase */
    /*-------------------------------------------------------------------------*/
    int rows = 0; /* diamond order */
    int rc;

    printf("Enter an odd integer (1..19) to specify diamond rows: ");
    
    while (1) {
        rc = scanf("%d", &rows);
        
        if (rows < 1 || rows > 19) {
            printf("Out of range — enter an odd integer between 1 and 19: ");
            continue;
        }
        
        if (rows % 2 == 0) {
            printf("Even number entered — please enter an odd integer: ");
            continue;
        }
        
        break; /* valid odd integer obtained */
    }
    
    int counter = 0;
    int first_column_index = rows / 2;
    int last_column_index = rows / 2;
    /*-------------------------------------------------------------------------*/
    
    /* processing phase */
    /*------------------------------------------------------------------------------------*/
    for (int i = 0; i < ((rows * 2) - 1); ++i) {
        printf("-");
    }
    printf("\n");
    
    /* main logic */
    /* column printing logic */
    for (int row = 0; row < rows; ++row) {
        for (int column = 0; column < rows; ++column) {
            if ((column >= first_column_index) && (column <= last_column_index)) {
                counter += 1;
                printf("* "); /* "*" is used instead of a counter */
            }
            else {
                printf("  "); 
            } 
        }
        
        /* update first and last column indices */
        if (row >= (rows / 2)) {
            /* below middle row */
            first_column_index += 1;
            last_column_index -= 1;
        }
        else {
            /* above middle row */
            first_column_index -= 1;
            last_column_index += 1;
        }
        
        printf("\n");
    }
    
    for (int i = 0; i < ((rows * 2) - 1); ++i) {
        printf("-");
    }
    printf("\n");
    /*------------------------------------------------------------------------------------*/

    return 0;
}


/********************************************************************************************
 * Site Note: Detailed First-Principles Explanation Available in Project Notion Website     *
 *                                                                                          *
 * A concise explanation of the diamond-printing logic and its implementation details can   *
 * be found in the project's Notion documentation.                                          *
 ********************************************************************************************/