/**
 * File: exercise_4_25_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Table of Decimal, Binary, Octal and Hexadecimal Equivalents) Write a program 
 *                 that prints a table of the binary, octal and hexadecimal equivalents of the
 *                 decimal numbers 1—256. [Note: You can display an integer as an octal or 
 *                 hexadecimal value with the conversion specifications %o and %x, respectively.]
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 18-12-2025
 */

#include <stdio.h>

int main(void) {
    // table header 
    printf("Decimal\tBinary\t\tOctal\tHexadecimal\n");
    printf("=======\t===============\t=======\t===========\n"); 

    // counter-controlled iteration
    for (int i = 1; i <= 256; i++) {
        // print decimal
        printf("%d\t", i);

        // print binary
        // ──────────────────────────────────────────────────────
        // this loop performs a manual binary serialization
        // of an integer using bit masking and bitwise inspection
        //
        // see the project Notion website (referenced on the 
        // README.md file) for detailed explanation 
        for (int j = 7; j >= 0; j--) {
            putchar((i & (1 << j)) ? '1' : '0');
        }
        printf("\t");
        // ──────────────────────────────────────────────────────

        // print octal
        printf("%o\t", i);

        // print hexadecimal
        // printf("%x\n", i); // lowercase hexadecimal values
        printf("%X\n", i); // uppercase hexadecimal values   
    } 

    return 0;
}