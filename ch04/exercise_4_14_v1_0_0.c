/**
 * File: exercise_4_14_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Factorials) The factorial function is used frequently in probability problems. 
 *                 The factorial of a positive integer n (written n! and pronounced “n factorial”) 
 *                 is equal to the product of the positive integers from 1 to n. Write a program 
 *                 that evaluates the factorials of the integers from 1 to 5. Print the results in 
 *                 tabular format. What difficulty might prevent you from calculating the factorial 
 *                 of 20?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 06-11-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    int factorial = 1;
    
    // ━━━━━━━━━━━━━━━━
    // processing phase
    // ━━━━━━━━━━━━━━━━
    //────────────────────────────────────────────
    // table header
    printf("%-6s%22s\n", "Number", "Factorial");
    
    // main logic
    // counter-controlled nested iterations
    // to compute factorials of 1 through 5
    for (int i = 1 ; i <= 5 ; ++i) {
        for(int j = 1 ; j <= i ; ++j) {
            factorial *= j;
        }
        
        // ━━━━━━━━━━━━━━━━━
        // termination phase
        // ━━━━━━━━━━━━━━━━━
        printf("%-6d%22d\n", i, factorial);
        
        factorial = 1;
    }
    //────────────────────────────────────────────

    return 0;
}


/***************************************************************************
 * Site Note: Arithmetic Overflow Limitation                               *
 *                                                                         *
 * The 'long long' type (64-bit signed integer) can represent values up    *
 * to 9,223,372,036,854,775,807 (2^63 - 1). However:                       *
 *                                                                         *
 *   • 20! = 2,432,902,008,176,640,000           ✅ Fits in long long     *  
 *   • 21! = 51,090,942,171,709,440,000          ❌ OVERFLOW              * 
 *                                                                         *
 * Computing factorials beyond 20 requires:                                *
 *                                                                         *
 *   1. Floating-point approximation (double) → ~170! max, loses precision *
 *   2. Arbitrary precision libraries:                                     *
 *                                                                         *
 *      - C: GMP (GNU Multiple Precision) library                          *
 *      - C++: Boost Multiprecision's cpp_int                              *
 *                                                                         *
 * For embedded/robotics systems, this limitation is critical when:        *
 *                                                                         *
 *   • Computing combinatorics (path planning)                             *
 *   • Cryptographic operations (RSA uses large integers)                  *
 *   • Sensor fusion algorithms (large matrix determinants)                *
 ***************************************************************************/