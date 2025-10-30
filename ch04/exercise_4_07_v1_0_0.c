/**
 * File: exercise_4_07_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ Write for statements that print the following sequences of values:
 *                     
 *                    a) 1, 2, 3, 4, 5, 6, 7
 *                    b) 3, 8, 13, 18, 23
 *                    c) 20, 14, 8, 2, -4, -10
 *                    d) 19, 27, 35, 43, 51
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 30-10-2025
 */

#include <stdio.h>

int main(void) {
    // a)
    for (int i = 1; i <= 7; ++i) {
        printf("%d, ", i);
    }
    puts("");
    
    // b)
    for (int i = 3; i <= 23; i += 5) {
        printf("%d, ", i);
    }
    puts("");
    
    // c)
    for (int i = 20; i >= -10; i -= 6) {
        printf("%d, ", i);
    }
    puts("");
    
    // d)
    for (int i = 19; i <= 51; i += 8) {
        printf("%d, ", i);
    }
    puts("");
}