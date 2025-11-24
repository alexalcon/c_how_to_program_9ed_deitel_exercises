/**
 * File: exercise_4_31_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Diamond-Printing Program) Write a program that prints the following diamond 
 *                 shape. Your printf statements may print either one asterisk (*) or one blank. 
 *                 Use nested for statements and minimize the number of printf statements.
 * 
 *                               *
 *                              ***
 *                             *****
 *                            *******
 *                           *********
 *                            *******
 *                             *****
 *                              ***
 *                               *
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 04-12-2025
 */

#include <stdio.h>

int main(void) {
    /* initialization phase */
    /*----------------------------------------------*/
    int rows = 9; /* number of rows */
    
    int counter = 0;
    int first_column_index = rows / 2;
    int last_column_index = rows / 2;
    
    if (rows % 2 == 0) {
        rows += 1; /* ensure an odd number of rows 
                      for a symmetric diamond */
    }
    /*----------------------------------------------*/
    
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