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

// counting letter grades with if statements
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
        // non-exclusive conditional if statements (or logic)
        if (grade == 'A' || grade == 'a') {
            ++aCount;
        }
        if (grade == 'B' || grade == 'b') {
            ++bCount;
        }
        if (grade == 'C' || grade == 'c') {
            ++cCount;
        }
        if (grade == 'D' || grade == 'd') {
            ++dCount;
        }
        if (grade == 'F' || grade == 'f') {
            ++fCount;
        }
        if (grade == '\n' || grade == '\t' || grade == ' ') {
            // ignore newlines, tabs, and spaces in input
        }
        // De Morgan's law to handle default case
        if (grade != 'A' && grade != 'a' &&
            grade != 'B' && grade != 'b' &&
            grade != 'C' && grade != 'c' &&
            grade != 'D' && grade != 'd' &&
            grade != 'F' && grade != 'f' &&
            grade != '\n' && grade != '\t' && grade != ' ') {
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
