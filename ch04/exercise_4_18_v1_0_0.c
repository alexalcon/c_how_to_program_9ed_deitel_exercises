/**
 * File: exercise_4_18_v1_0_0.c 
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: ✰ (Bar-Chart Printing Program) One interesting application of computers is drawing 
 *                 graphs and bar charts. Write a program that reads five numbers (each between 1 
 *                 and 30). For each number read, your program should print a line containing that 
 *                 number of adjacent asterisks. For example, if your program reads the number 
 *                 seven, it should print *******.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 07-11-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    // initialization and processing phase
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    //───────────────────────────────────────────────────────────────────
    int bar_1 = 0;
    int bar_2 = 0;
    int bar_3 = 0;
    int bar_4 = 0;
    int bar_5 = 0;
    int bar_6 = 0;
    int bar_7 = 0;

    // store inputs from user
    for (int counter = 0 ; counter < 5 ; ++counter) {
        int integer_input = 0;
        printf("%s", "Enter a positive integer between 1 and 30: ");
        scanf("%d", &integer_input);
        
        // validating user input for integers between a 1 and 30
        while ( (integer_input < 1) || (integer_input > 30) ) {
            printf("%s", "Input positive integer must be between 1 and"
                " 30, please reenter the number : ");
            scanf("%d", &integer_input);
        }

        switch (counter) {
            case 0:
                bar_1 = integer_input;
                break;
            case 1:
                bar_2 = integer_input;
                break;
            case 2:
                bar_3 = integer_input;
                break;
            case 3:
                bar_4 = integer_input;
                break;
            case 4:
                bar_5 = integer_input;
                break;
        }
    }
        puts("");
        //───────────────────────────────────────────────────────────────────
    
    // ━━━━━━━━━━━━━━━━━
    // termination phase
    // ━━━━━━━━━━━━━━━━━
    // printing asterisc bars
    for (int counter = 0 ; counter < 5 ; ++counter ) {
        switch (counter) {
            case 0:
                for (int i =0 ; i < bar_1 ; ++i) {
                    printf("%s", "*");

                }
                puts("");
                break;
            case 1:
                for (int i =0 ; i < bar_2 ; ++i) {
                    printf("%s", "*");
                }
                puts("");
                break;
            case 2:
                for (int i =0 ; i < bar_3 ; ++i) {
                    printf("%s", "*");

                }
                puts("");
                break;
            case 3:
                for (int i =0 ; i < bar_4 ; ++i) {
                    printf("%s", "*");

                }
                puts("");
                break;
            case 4:
                for (int i =0 ; i < bar_5 ; ++i) {
                    printf("%s", "*");

                }
                puts("");
                break;
        }
    }

    return 0;
}