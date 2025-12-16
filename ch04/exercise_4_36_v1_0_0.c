/**
 * File: exercise_4_36_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ What does the following program segment do?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 16-12-2025
 */

#include <stdio.h>

int main(void) {
    // print five 3x4 matrices of "*"
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 3; ++j) {
            for (int k = 1; k <= 4; ++k) {
                printf("%s", "*");
            }
            puts("");
        }
        puts("");
 }
 
    return 0;
}