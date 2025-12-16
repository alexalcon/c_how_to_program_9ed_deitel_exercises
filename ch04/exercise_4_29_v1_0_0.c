/**
 * File: exercise_4_29_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (De Morgan’s Laws) We discussed the logical operators &&, ||, and !. De Morgan’s 
 *                 Laws help express logical expressions more conveniently. These laws state that 
 *                 the expression !(condition1 && condition2) is logically equivalent to 
 *                 (!condition1 || !condition2). Also, the expression !(condition1 || condition2)
 *                 is logically equivalent to (!condition1 && !condition2). Use De Morgan’s Laws to 
 *                 write equivalent expressions for each of the following, and then write a program 
 *                 to show that both the original expression and the new expression in each case 
 *                 are equivalent.
 * 
 *                      a) !(x < 5) && !(y >= 7)
 *                      b) !(a == b) || !(g != 5)
 *                      c) !((x <= 8) && (y > 4))
 *                      d) !((i > 4) || (j <= 6))
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 16-12-2025
 */

#include <stdio.h>

int main(void) {
    // sample values to test
    int x = 4, y = 7, a = 3, b = 3, g = 5, i = 5, j = 6;

    // original and equivalent expressions
    _Bool exprA_original = !(x < 5) && !(y >= 7);
    _Bool exprA_new = (x >= 5) && (y < 7); // applying De Morgan's Law

    _Bool exprB_original = !(a == b) || !(g != 5);
    _Bool exprB_new = (a != b) || (g == 5); // applying De Morgan's Law

    _Bool exprC_original = !((x <= 8) && (y > 4));
    _Bool exprC_new = (x > 8) || (y <= 4); // applying De Morgan's Law

    _Bool exprD_original = !((i > 4) || (j <= 6));
    _Bool exprD_new = (i <= 4) && (j > 6); // applying De Morgan's Law

    // display results    
    printf("%s", "Checking De Morgan's Laws equivalences:\n");
    printf("a) %s\n", (exprA_original == exprA_new) ? "Equivalent" : "Not Equivalent");
    printf("b) %s\n", (exprB_original == exprB_new) ? "Equivalent" : "Not Equivalent");
    printf("c) %s\n", (exprC_original == exprC_new) ? "Equivalent" : "Not Equivalent");
    printf("d) %s\n", (exprD_original == exprD_new) ? "Equivalent" : "Not Equivalent");

    return 0;
}
