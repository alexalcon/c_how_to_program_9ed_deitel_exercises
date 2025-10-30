/**
 * File: exercise_4_06_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: State which values of the control variable x are printed by 
 *              each of the following for statements:
 * 
 *                  a) for (int x = 2; x <= 13; x += 2) {
 *                         printf("%d\n", x);
 *                     }
 *  
 *                  b) for (int x = 5; x <= 22; x += 7) {
 *                         printf("%d\n", x);
 *                     }
 *  
 *                  c) for (int x = 3; x <= 15; x += 3) {
 *                         printf("%d\n", x);
 *                     }
 *  
 *                  d) for (int x = 1; x <= 5; x += 7) {
 *                         printf("%d\n", x);
 *                     }
 *  
 *                  e) for (int x = 12; x >= 2; x -= 3) {
 *                         printf("%d\n", x);
 *                     }
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 30-10-2025
 */

#include <stdio.h>

int main(void) {
    // a)
    for (int x = 2; x <= 13; x += 2) {
        printf("%d\t", x);
    }
    puts("");
    
    // b)
    for (int x = 5; x <= 22; x += 7) {
        printf("%d\t", x);
    }
    puts("");
    
    // c)
    for (int x = 3; x <= 15; x += 3) {
        printf("%d\t", x);
    }
    puts("");
    
    // d)
    for (int x = 1; x <= 5; x += 7) {
        printf("%d\t", x);
    }
    puts("");
    
    // e)
    for (int x = 12; x >= 2; x -= 3) {
        printf("%d\t", x);
    }
    puts("");

    return 0;
}