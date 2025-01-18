/**
 * File: exercise_3_24_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Tabular Output) Write a program that uses looping to print the following table of
 *              values. Use the tab escape sequence, \t, in the printf statement to separate the 
 *              columns with tabs.
 *              
 *                      N       10*N    100*N   1000*N
 *                      1       10      100     1000
 *                      2       20      200     2000
 *                      3       30      300     3000
 *                      4       40      400     4000
 *                      5       50      500     5000
 *                      6       60      600     6000
 *                      7       70      700     7000
 *                      8       80      800     8000
 *                      9       90      900     9000
 *                      10      100     1000    10000
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter = 1; 

    // processing phase
    // counter-controlled iteration
    //---------------------------------------------------------
    printf("%s\t%s\t%s\t%s", "N", "10*N", "100*N", "1000*N");
    puts("");

    while(counter <= 10) {
        printf("%d\t%d\t%d\t%d", counter, 
                                 10*counter, 
                                 100*counter, 
                                 1000*counter);
        puts("");
    
        ++counter;
    }
    //---------------------------------------------------------

    return 0;
}