/**
 * File: exercise_4_39_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Limitations of Floating-Point Numbers for Monetary Amounts) Section 4.5 
 *                 cautioned about using floating-point values for monetary calculations. Try this 
 *                 experiment: Create a float variable with the value 1000000.00. Next, add to that 
 *                 variable the literal float value 0.12f. Display the result using printf and the 
 *                 conversion specification "%.2f". What do you get?
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 20-12-2025
 */

#include <stdio.h>

int main(void) {
    float amount = 1000000.00f;
    amount += 0.12f;
    printf("Amount: %.2f\n", amount);

    return 0;
}  