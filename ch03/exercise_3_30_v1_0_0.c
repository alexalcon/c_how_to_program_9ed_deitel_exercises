/**
 * File: exercise_3_30_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Dangling-else Problem) Determine the output for each of the following when x is 9 
 *              and y is 11, and when x is 11 and y is 9. The compiler ignores the indentation in a 
 *              C program. Also, the compiler always associates an else with the previous if unless
 *              told to do otherwise by the placement of braces {}. On first glance, you may not be
 *              sure which if an else matches, so this is referred to as the “dangling-else” 
 *              problem. We eliminated the indentation from the following code to make the problem 
 *              more challenging. [Hint: Apply indentation conventions you have learned.]
 *    
 *                  a) if (x < 10)
 *                     if (y > 10)
 *                     puts("*****");
 *                     else
 *                     puts("#####");
 *                     puts("$$$$$");
 * 
 *                  b) if (x < 10) {
 *                     if (y > 10)
 *                     puts("*****"); 
 *                     }
 *                     else {
 *                     puts("#####");
 *                     puts("$$$$$");
 *                     }
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    int x = 9;
    int y = 11;

    // a) dangling-else problem
    if (x < 10)
    if (y > 10)
    puts("*****");
    else
    puts("#####");
    puts("$$$$$");

    puts("");

    // b) dangling-else problem fixed
    x = 11; 
    y = 9; 

    if (x < 10) {
        if (y > 10)
            puts("*****"); 
    }
    else {
        puts("#####");
        puts("$$$$$");
    }

    return 0;
}