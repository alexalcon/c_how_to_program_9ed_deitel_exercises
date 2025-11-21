/**
 * File: exercise_4_23_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Calculating the Compound Interest with Integers) Modify the program of Fig. 4.4 
 *                 so that it uses only integers to calculate the compound interest. [Hint: Treat 
 *                 all monetary amounts as integral numbers of pennies. Then “break” the result into
 *                 its dollar portion and cents portion by using the division and remainder 
 *                 operations, respectively. Insert a period.]
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 21-11-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━
	// initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
	// ─────────────────────────────────────────────────────────────────────────────────────
    // avoid pow(), avoid double, avoid floating-point altogether
    long principal = 100000;               // $1000.00 → 100000 pennies (1 pennie = 0.01$)
    int rate_percent = 5;                  // 5% interest
    int rate_factor = 100 + rate_percent;  // multiply by 105 then divide by 100
	// ─────────────────────────────────────────────────────────────────────────────────────
    
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	// processing and termination phase
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
	// ─────────────────────────────────────────────────────────────────────────────────────
    printf("%4s%25s\n", "Year", "Amount on deposit");
    
    long amount = principal;
    
    // calculate amount on deposit for each of ten years
    for (int year = 1; year <= 10; ++year) {
        // integer compound interest:
        amount = (amount * rate_factor) / 100;
        
        // break into dollars and cents:
        long dollars = amount / 100;
        long cents   = amount % 100;
        
        // print result with correct formatting for cents
        printf("%4d%20ld.%02ld\n", year, dollars, cents);
    }
    // ─────────────────────────────────────────────────────────────────────────────────────

    return 0;
}


/********************************************************************************************
 * Site Note: Detailed First-Principles Explanation Available in Project Notion Website     *
 *                                                                                          *
 * This source file implements the integer-based compound-interest algorithm as required by *
 * Exercise 4.23. The full conceptual explanation, including:                               *
 *                                                                                          *
 *    • Why floating-point is avoided for financial calculations?                           *
 *    • Why money is treated as integral pennies?                                           *
 *    • Why the interest factor is expressed as (105/100)?                                  * 
 *    • Why integer multiplication is performed before division?                            *
 *    • Why /100 and %100 correctly extract dollars and cents?                              *
 *                                                                                          *
 * is documented extensively in the corresponding Notion page for this project.             *
 *                                                                                          *
 * Reference for location:                                                                  *
 *    → See the projects’s README.md file. It includes a link to the dedicated Notion page  *
 *      providing the complete enhanced explanation based on a First-Principles Approach.   *
 *                                                                                          *
 * This comment exists so future maintainers can quickly discover where the authoritative   *
 * theoretical and practical documentation is stored.                                       *
 ********************************************************************************************/