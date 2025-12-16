/**
 * File: exercise_4_35_v1_0_0.c
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

int main(void) {
    int count = 1;         // control variable also used after loop
    _Bool should_exit = 0; // flag to indicate early exit

    for (; (count <= 10 && !should_exit) ; ++count) {
        if (count == 5) {
            should_exit = 1; // set flag instead of breaking
        }
        else {
            printf("%d ", count);
        }
    }

    printf("\nExited loop at count = %d.\n", count - 1);

    return 0;
}