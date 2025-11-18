/**
 * File: exercise_4_22_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: (Average Grade) Modify the program of Fig. 4.5 so that it calculates 
 *              the average grade for the class.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 18-11-2025
 */

#include <stdio.h>

int main(void) {
   	// ━━━━━━━━━━━━━━━━━━━━
   	// initialization phase
   	// ━━━━━━━━━━━━━━━━━━━━
	// ──────────────────────────────────────────────
   	int aCount = 0;
   	int bCount = 0;
   	int cCount = 0;
   	int dCount = 0;
   	int fCount = 0;

   	int totalNumeric = 0; // sum of numeric grades
   	int gradeCount = 0;   // number of valid grades
	// ──────────────────────────────────────────────
   	
	// ━━━━━━━━━━━━━━━━
	// processing phase
	// ━━━━━━━━━━━━━━━━
	// ──────────────────────────────────────────────────────────────────────────
	puts("Enter the letter grades.");
   	puts("Enter the EOF character to end input.");
   	int grade = 0;
   	
	// we convert each letter grade into a 
   	// numeric grade (A=4, B=3, C=2, D=1, F=0)
   	while ((grade = getchar()) != EOF) {
   	    switch (grade) {
   	        case 'A':
   	        case 'a':
   	            ++aCount;
   	            totalNumeric += 4;
   	            ++gradeCount;
   	            break;
   	        case 'B':
   	        case 'b':
   	            ++bCount;
   	            totalNumeric += 3;
   	            ++gradeCount;
   	            break;
   	        case 'C':
   	        case 'c':
   	            ++cCount;
   	            totalNumeric += 2;
   	            ++gradeCount;
   	            break;
   	        case 'D':
   	        case 'd':
   	            ++dCount;
   	            totalNumeric += 1;
   	            ++gradeCount;
   	            break;
   	        case 'F':
   	        case 'f':
   	            ++fCount;
   	            totalNumeric += 0;
   	            ++gradeCount;
   	            break;
   	        case '\n':
   	        case '\t':
   	        case ' ':
   	            break;
   	        default:
   	            printf("Incorrect letter grade entered. Enter a new grade.\n");
   	            break;
   	    }
   	}
	// ──────────────────────────────────────────────────────────────────────────
	   
	// ━━━━━━━━━━━━━━━━━
	// termination phase
	// ━━━━━━━━━━━━━━━━━
	// ──────────────────────────────────────────────────────────
	// output summary of results
	puts("\nTotals for each letter grade are:");
	printf("A: %d\n", aCount);
   	printf("B: %d\n", bCount);
   	printf("C: %d\n", cCount);
   	printf("D: %d\n", dCount);
   	printf("F: %d\n", fCount);

	if (gradeCount > 0) {
		double average = (double) (totalNumeric / gradeCount);
   	    printf("\nClass average (0-4 scale): %.2f\n", average);
	} else {
		puts("\nNo valid grades were entered.");
	}
	// ──────────────────────────────────────────────────────────

	return 0;
}