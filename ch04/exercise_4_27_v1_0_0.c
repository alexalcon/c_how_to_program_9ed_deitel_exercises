/**
 * File: exercise_4_27_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Pythagorean Triples) A right triangle can have sides that are all integers. The 
 *                 set of three integer values for a right triangle’s sides is a Pythagorean triple. 
 *                 These three sides must satisfy the relationship that the sum of the sides’ 
 *                 squares is equal to the hypotenuse’s square. Find all Pythagorean triples for 
 *                 side1, side2, and the hypotenuse, all no larger than 500. Use a triple-nested for 
 *                 loop that tries all possibilities. This is an example of “brute-force” computing.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 10-12-2025
 */

#include <stdio.h>

int main(void) {
    puts("Pythagorean Triples (a, b, c) where a^2 + b^2 = c^2");
    puts("-----------------");
    printf("%3s%6s%6s\n", "a", "b", "c");
    puts("-----------------");

    // triple-nested loops to find all valid combined triples 
    // iterate through all combinations of a, b, and c from 1 to 500.
    /**
     * in the second for statement, start from 'a' to 
     * avoid duplicates like (3,4,5) and (4,3,5)
     */
    for (int a = 1; a <= 500; ++a) {
        for (int b = a; b <= 500; ++b) {
            for (int c = b; c <= 500; ++c) {
                // check Pythagorean Condition
                if ((a * a) + (b * b) == (c * c)) {
                    printf("%3d%6d%6d\n", a, b, c);
                }   
            }
        }
    }

    return 0;
}
