/**
 * File: exercise_3_35_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Printing the Decimal Equivalent of a Binary Number) Input a binary integer (5 
 *                 digits or fewer) containing only 0s and 1s and print its decimal equivalent. 
 *                 [Hint: Use the remainder and division operators to pick off the “binary” number’s
 *                 digits one at a time from right-to-left. Just as in the decimal number system, 
 *                 in which the rightmost digit has a positional value of 1, and the next digit 
 *                 left has a positional value of 10, then 100, then 1000, and so on, in the binary 
 *                 number system the rightmost digit has a positional value of 1, the next digit 
 *                 left has a positional value of 2, then 4, then 8, and so on. Thus the decimal 
 *                 number 234 can be interpreted as 4 * 1 + 3 * 10 + 2 * 100. The decimal equivalent 
 *                 of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.] 
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    // initialization phase
    //-----------------------------------------------------
    // read binary positive integer from user and
    // ensure the binary positive number is within 
    // valid system integer limits
    // (optional: add additional validation if necessary)
    int binary_number = 0; // positive binary number
    printf("%s", "Enter binary positive integer: "); 
    scanf("%d", &binary_number);

    int decimal_number = 0;
    int counter = 0;
    //-----------------------------------------------------

    // processing phase
    while (binary_number != 0) {
        // main logic
        // breaking down binary digits
        //**********************************
        int binary_digit;
        binary_digit = binary_number % 10;

        binary_number /= 10; 
        //**********************************

        // converting from binary to decimal
        decimal_number = decimal_number + binary_digit*pow(2, counter);
        ++counter;
    }
    
    // termination phase
    printf("%s%d\n", "The decimal equivalent is ", decimal_number);

    return 0;
}