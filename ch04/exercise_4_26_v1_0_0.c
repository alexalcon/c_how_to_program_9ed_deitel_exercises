/**
 * File: exercise_4_26_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Calculating the Value of π) Calculate the value of π from the infinite series:
 * 
 *                      π = 4 − 4/3 + 4/5 − 4/7 + 4/9 − 4/11 + ⋯
 * 
 *                 Print a table that shows the value of π approximated by one term of this series, 
 *                 by two terms, by three terms, and so on. How many terms of this series do you 
 *                 have to use before you first get 3.14? 3.141? 3.1415? 3.14159?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 04-12-2025
 */


#include <stdio.h>

int main(void) {
    // initialization phase
    // ──────────────────────────────────────────────────
    double pi = 0.0;

    // table headers
    //=====================================
    // horizontal up table header ruler 
    for (int i = 1 ; i <= 30 ; ++i) {
        printf("%s", "-");
    }
    puts("");
    
    // display headers   
    printf("%-10s%20s\n", "term", "pi");
    
    // horizontal down table header ruler
    for (int i = 1 ; i <= 30 ; ++i) {
        printf("%s", "-");
    }
    puts("");
    //=====================================
    // ──────────────────────────────────────────────────
    
    // processing phase
    // main logic
    // counter-controlled iteration
    // loop through terms 1 to 200000 terms to approximate 
    // π with sufficient precision
    for (int term = 1 ; term <= 200000 ; ++term) {
        // each term uses ((2 * term) - 1) to get the nth odd integer,
        // applied here in the Leibniz series for π
        double denominator = (double)((2 * term) - 1);
        double add = 4.0 / denominator;
        if ( (term % 2) == 1 ) { // add term when 'term' is odd
            pi += add; 
            // printf("DEBUG: term=%d denom=%.1f add=%.15f pi=%.15f\n", term, denominator, add, pi);
        }
        else { // subtract term when 'term' is even
            pi -= add; 
            // printf("DEBUG: term=%d denom=%.1f add=%.15f pi=%.15f\n", term, denominator, add, pi);
        }
        
        printf("%-10d%20.15Lf\n", term, pi);
    }

    return 0;
}
