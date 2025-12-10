/**
 * File: exercise_4_30_v1_1_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Replacing switch with if…else) Rewrite Fig. 4.5 by replacing the switch with a 
 *                 nested if…else statement. Be careful to deal with the default case properly. 
 *                 Next rewrite this new version by replacing the nested if…else statement with a       
 *                 series of if statements. Here, too, be careful to deal with the default case 
 *                 properly. This exercise demonstrates that switch is a convenience and that any 
 *                 switch statement can be written with only single-selection statements. 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 10-12-2025
 */

// counting letter grades with if...else statements
#include <stdio.h>

int main(void) {
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade = 0; // one grade

    while (grade = getchar(), grade != EOF) {
        // determine which grade was input
        // exclusive conditional if...else statements (xor logic)
        if (grade == 'A' || grade == 'a') {
            ++aCount;
        } else if (grade == 'B' || grade == 'b') {
            ++bCount;
        } else if (grade == 'C' || grade == 'c') {
            ++cCount;
        } else if (grade == 'D' || grade == 'd') {
            ++dCount;
        } else if (grade == 'F' || grade == 'f') {
            ++fCount;
        } else if (grade == '\n' || grade == '\t' || grade == ' ') {
            // ignore newlines, tabs, and spaces in input
        } else {
            // catch all other characters
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
        }
    }
    
    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);

    return 0;
}