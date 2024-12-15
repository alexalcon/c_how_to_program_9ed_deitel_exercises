/**
 * File: exercise_2_29_v1_0_0.c 
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -----------------------------------------------------------------------------------------------
 * Description: ✰ (Sort in Ascending Order) Write a program that inputs three different numbers 
 *                 from the user. Display the numbers in increasing order. Recall that an if 
 *                 statement’s body can contain more than one statement. Prove that your script 
 *                 works by running it on all six possible orderings of the numbers. Does your 
 *                 script work with duplicate numbers? [This is challenging. In later chapters 
 *                 you’ll do this more conveniently and with many more numbers.]     
 * -----------------------------------------------------------------------------------------------
 * Created on: 23-11-2023
 */

#include <stdio.h>

int main(void) {
    // read three different integers from the user
    int a = 0, b = 0, c = 0;
    printf("%s", "Enter three different integer numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    // holding variable
    int hold; 
    
    /**
     * main logic - swap logic
     *
     * sorting using non-exclusive conditionals
     * (single-selection form of if statements 
     * are non-exclusive conditionals) 
     * 
     * comparing all possible pairs
     */
    //*************
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
    //*************
    
    // display result
    printf("Numbers in ascending order: %d %d %d\n", a, b, c);

    return 0;
} // end function main