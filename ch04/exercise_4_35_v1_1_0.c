/**
 * File: exercise_4_35_v1_1_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ A criticism of the break and continue statements is that each is unstructured. 
 *                Actually, break and continue statements can always be replaced by structured 
 *                statements, though doing so can be awkward. Describe how you’d remove any break 
 *                statement from a loop and replace that statement with some structured equivalent.
 *                [Hint: The break statement terminates a loop from the loop body. The other way 
 *                to leave is by failing the loop-continuation test. Consider using in the 
 *                loop-continuation test a second test that indicates “early exit because of a 
 *                break condition.”] Use the technique you developed to remove the break statement 
 *                from the program of Fig. 4.7.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 16-12-2025
 */

#include <stdio.h>

// another solution without a flag variable
int main() { 
    int count; // control variable also used after loop

    for (count = 1; (count <= 10 && count != 5); ++count) {
        printf("%d ", count);
    }

    printf("\nBroke out of loop at count = %d.\n", count);

    return 0;
}