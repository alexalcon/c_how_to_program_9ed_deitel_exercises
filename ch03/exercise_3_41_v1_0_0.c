/**
 * File: exercise_3_41_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Diameter, Circumference and Area of a Circle) Write a program that reads the 
 *              radius of a circle (as a double value) and computes and prints the diameter, the 
 *              circumference and the area. Use the value 3.14159 for π.
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialization phase
    double radius = 0.0;
    printf("%s", "Enter radius: ");
    scanf("%lf", &radius);

    // processing phase: calculations
    double diameter = radius*2;
    double circumference = 2*3.14159*radius;
    double area = 3.14159*radius*radius;

    // termination phase
    // show calculations results (with five digits of precision)
    printf("\nDiameter:\t%.5f\n", diameter);
    printf("Circumference:\t%.5f\n", circumference * 2);
    printf("Area:\t\t%.5f\n", area);
        
    return 0;
}