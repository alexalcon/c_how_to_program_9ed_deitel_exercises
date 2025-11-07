/**
 * File: exercise_4_16_v1_0_0.c
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
    // pattern a)
    puts("Pattern a)"); 
    puts("----------");
    int column_counter = 1;
    for (int row = 0 ; row < 10 ; ++row) {
        for (int column = 0 ; column < column_counter ; ++column) {
            printf("%s", "*");
        }
        ++column_counter;
        puts("");
    } 
    puts("");
    
    // pattern b)
    puts("Pattern b)"); 
    puts("----------");
    column_counter = 10;
    for (int row = 0 ; row < 10 ; ++row) {
        for (int column = 0 ; column < column_counter ; ++column) {
            printf("%s", "*");
        }
        --column_counter;
        puts("");
    }
    puts("");
    

    // pattern c)
    puts("Pattern c)"); 
    puts("----------");
    column_counter = 10;
    for (int row = 0 ; row < 10 ; ++row) {
        // blank spaces filling
        for (int space_counter = 0 ; space_counter < row ; ++space_counter) {
            printf("%s", " ");
        }
        // asterisks filling
        for(int column = 0 ; column < column_counter ; ++column) {
            printf("%s", "*");
        }
        --column_counter;
        puts("");
    }
    puts("");
    
    // pattern d)
    puts("Pattern d)"); 
    puts("----------");
    column_counter = 10;
    for (int row = 0 ; row < 10 ; ++row) {
        // blank spaces filling
        for (int space_counter = 0 ; space_counter < (space_counter - 1) ; ++space_counter) {
            printf("%s", " ");
        }
        // asterisks filling
        for(int column = 0 ; column < (row + 1) ; ++column) {
            printf("%s", "*");
        }
        --column_counter;
        puts("");
    }

    return 0;
}