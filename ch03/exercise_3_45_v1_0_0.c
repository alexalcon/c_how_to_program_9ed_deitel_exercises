/**
 * File: exercise_3_45_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Factorial) The factorial of a non-negative integer n is written n! (pronounced 
 *                 “n factorial”) and is defined as follows:
 *      
 *                     n! = n · (n – 1) · (n – 2) · … · 1   (for values of n greater than 1)
 *                 and
 *                      n! = 1   (for n = 0 or n = 1).
 * 
 *                 For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120. 
 * 
 *                      a) Write a program that reads a nonnegative integer and computes and prints 
 *                         its factorial.
 *              
 *                      b) Write a program that estimates the value of the mathematical constant e  
 *                         by using the formula: 
 *                      
 *                              e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
 * 
 *                        Prompt the user for the desired accuracy of e (i.e., the number of terms
 *                        in the summation).
 * 
 *                      c) Write a program that computes the value of e^x by using the formula:
 * 
 *                              e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ... 
 * 
 *                         Prompt the user for the desired accuracy of e^x (i.e., the number of
 *                         terms in the summation).
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // a) factorial of a non-negative integer
    //--------------------------------------------------------------------------
    // initialization phase
    unsigned long long non_negative_integer = 0;
    printf("%s", "Enter a nonnegative integer number (task \"a\"): ");
    scanf("%llu", &non_negative_integer);

    unsigned long long counter = 1;
    unsigned long long factorial = 1;
    
    // processing phase
    while(counter <= non_negative_integer) {
        // main logic
        //*********************
        factorial *= counter;
        
        ++counter;
        //*********************
    }

    // termination phase
    // show result
    printf("The factorial of %llu is: %llu\n", non_negative_integer, factorial);
    //--------------------------------------------------------------------------

    puts("---------------------------------------------------");

    // b) e = 1 + (1/1!) + (1/2!) + (1/3!) + ...
    //--------------------------------------------------------------
    // initialization phase
    double e = 1.0;                      // 'e' constant
    unsigned long long counter_b = 1;    // 'e' sumation counter
    unsigned long long factorial_b = 1;  // denominator factorial

    unsigned long long accuracy_b; // number of sumation terms
    printf("%s", "Enter the numbers of terms in the sumation"
           " (option \"b\"): ");
    scanf("%llu", &accuracy_b);

    // processing phase
    // main logic 
    //********************************************
    // counter-controlled iteration for sumation 
    // each iteration is a term computation 
    while ( counter_b <= (accuracy_b - 1) ) {
        factorial_b *= counter_b;

        e += ( 1.0 / factorial_b);

        ++counter_b;
    }   
    //********************************************
    
    // termination phase
    // show result
    printf("%s%.5f\n", "Constant e approximation: ", e);
    //--------------------------------------------------------------

    puts("---------------------------------------------------");

    // c) e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + ...
    //--------------------------------------------------------------
    // initialization phase
    double ex = 1.0;                     // 'e^x' function
    unsigned long long counter_c = 1;    // 'e^x' sumation counter
    unsigned long long factorial_c = 1;  // denominator factorial

    unsigned long long accuracy_c; // number of sumation terms
    printf("%s", "Enter the numbers of terms in the sumation"
           " (option \"c\"): ");
    scanf("%llu", &accuracy_c);

    double x; // variable x (real number)
    printf("%s", "Enter the variable x (real number): ");
    scanf("%lf", &x);
    double hold_x = x; // holding variable x 

    // processing phase
    // main logic
    //********************************************************
    // counter-controlled iteration for sumation 
    // each iteration is a term computation
    while( counter_c <= (accuracy_c - 1) ) {
        factorial_c *= counter_c; // denominator 

        ex += x / factorial_c;
        
        x *= hold_x; // numerator
    
        ++counter_c;
    }
    //********************************************************
    
    // termination phase
    // show result
    printf("%s%.5f\n", "e^x approximation: ", ex);
    //--------------------------------------------------------------
     
    return 0;
}