/**
 * File: exercise_3_44_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Sides of a Right Triangle) Write a program that reads three nonzero integers and
 *                 determines and prints whether they could be the sides of a right triangle.
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    double a, b, c; // triangle sides
    printf("%s", "Enter triangle sides: ");
    scanf("%lf%lf%lf", &a, &b, &c);

    // processing phase
    //---------------------------------------------------------------
    // sort sides in ascending order
    /**
     * sort in ascending order logic - swap logic
     *
     * sorting using non-exclusive conditionals
     * (single-selection form of if statements 
     * are non-exclusive conditionals) 
     * 
     *      'c' will be the hypotenuse 
     *      'a' and 'b' will be the sides  
     *
     * comparing all possible pairs
     */
    //********************************
    double hold; // holding variable

    if (a > b) {
        hold = a;
        a = b;
        b = hold;
    }
    if (a > c) {
        hold = a;
        a = c;
        c = hold;
    }
    if (b > c) {
        hold = b;
        b = c;
        c = hold;
    }
    //********************************
    
    // main logic
    // the pythagorean theorem
    //*************************************************************
    if ((c * c) == (a * a + b * b)) {
        printf("\nThe sides: %.4f, %.4f, and %.4f "
               "represent a right triangle.\n", a, b, c);
    } else {
        printf("\nThe sides: %.4f, %.4f, and %.4f "
               "do not represent a right triangle.\n", a, b, c);
    }
    //*************************************************************
    //---------------------------------------------------------------

    return 0;
} 