/**
 * File: exercise_4_33_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Roman-Numeral Equivalent of Decimal Values) Write a program that prints a table 
 *                 of the Roman-numeral equivalents for the decimal numbers in the range 1 to 100.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 20-12-2025
 */

#include <stdio.h>

int main(void) {
    printf("Decimal to Roman Numeral Conversion Table (1-100)\n");
    printf("=================================================\n\n");
    printf("%-10s%s\n", "Decimal", "Roman");
    printf("%-10s%s\n", "-------", "-----");

    // iterate through decimal values 1 to 100
    // counter-controlled iteration - main logic
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    // see the project Notion website (referenced on the 
    // README.md file) for detailed explanation 
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    for (int decimal = 1; decimal <= 100; ++decimal) {
        // working copy that will be modified 
        // as Roman symbols are extracted
        int remaining = decimal;

        printf("%-10d", decimal);

        // process hundreds (only C for 100 in our range)
        for (int i = 1; i <= remaining / 100; ++i) {
            printf("%s", "C");
        }
        remaining %= 100;

        // process nineties (90 = XC) - special case
        // ─────────────────────────────────────────
        if (remaining >= 90) {
            printf("%s", "XC");
            remaining -= 90;
        }
        // ─────────────────────────────────────────

        // process fifties (50 = L)
        for (int i = 1; i <= remaining / 50; ++i) {
            printf("%s", "L");
        }
        remaining %= 50;

        // process forties (40 = XL) - special case
        // ────────────────────────────────────────
        if (remaining >= 40) {
            printf("%s", "XL");
            remaining -= 40;
        }
        // ────────────────────────────────────────

        // process tens (10 = X)
        for (int i = 1; i <= remaining / 10; ++i) {
            printf("%s", "X");
        }
        remaining %= 10;

        // process nines (9 = IX) - special case
        // ─────────────────────────────────────
        if (remaining >= 9) {
            printf("%s", "IX");
            remaining -= 9;
        }
        // ─────────────────────────────────────

        // process fives (5 = V)
        for (int i = 1; i <= remaining / 5; ++i) {
            printf("%s", "V");
        }
        remaining %= 5;

        // process fours (4 = IV) - special case
        // ─────────────────────────────────────
        if (remaining >= 4) {
            printf("%s", "IV");
            remaining -= 4;
        }
        // ─────────────────────────────────────


        // process ones (1 = I)
        for (int i = 1; i <= remaining; ++i) {
            printf("%s", "I");
        }

        printf("\n");
    }

    printf("\n=================================================\n");

    return 0;
}