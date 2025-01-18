/**
 * File: exercise_3_25_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Tabular Output) Write a program that utilizes looping to produce the following 
 *                 table of values:
 * 
 *                      A       A+2     A+4     A+6
 *                      3       5       7       9
 *                      6       8       10      12
 *                      9       11      13      15
 *                      12      14      16      18
 *                      15      17      19      21
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    int counter = 3;
    int hold = 3; // holding variable for sentinel value (line 32)
    
    // processing  phase
    // sentinel-controlled iteration
    //-----------------------------------------------------------------
    printf("%s\t%s\t%s\t%s", "A", "A+2", "A+4", "A+6");
    puts("");
    
    while ( counter != (6*hold) ) { // (6*hold) is the sentinel value
        printf("%d\t%d\t%d\t%d", counter,
                                 counter + 2,
                                 counter + 4,
                                 counter + 6);
        puts("");

        counter += 3;
    }
    //-----------------------------------------------------------------

    return 0;
}