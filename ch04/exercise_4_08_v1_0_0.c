/**
 * File: exercise_4_08_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: What does the following program do?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 30-10-2025
 */

#include <stdio.h>

int main(void) {
    int x = 0;
    int y = 0;

    // prompt user for input
    printf("%s", "Enter two integers in the range 1-20: ");
    scanf("%d%d", &x, &y); // read values for x and y

    // this is a 'y' X 'x' matrix of @ elements    
    for (int i = 1; i <= y; ++i) { // count from 1 to y
        for (int j = 1; j <= x ; ++j) { // count from 1 to x
            printf("%s", "@");
        }
        puts(""); // begin new line
    }

    return 0;
}