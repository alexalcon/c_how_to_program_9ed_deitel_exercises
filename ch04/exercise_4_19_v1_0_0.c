/**
 * File: exercise_4_19_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Description: (Calculating Sales) An online retailer sells five different products whose retail 
 *              prices are shown in the following table:
 * 
 *                      Product number     Retail price
 *                      1                  $2.98
 *                      2                  $4.50
 *                      3                  $9.98
 *                      4                  $4.49
 *                      5                  $6.87
 * 
 *              Write a program that reads a series of pairs of numbers as follows:
 *                  
 *                      a) Product number.
 *                      b) Quantity sold for one day.
 *              
 *              Your program should use a switch statement to help determine the retail price for 
 *              each product. Your program should calculate and display the total retail value of 
 *              all products sold last week.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━ 
 * Created on: 10-11-2025
 */

#include <stdio.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    int product_number;
    int quantity_sold;
    
    // ━━━━━━━━━━━━━━━━
    // processing phase
    // ━━━━━━━━━━━━━━━━
    
    // display instructions to user
    printf("===================================================================\n");
    printf("        PRODUCT NUMBER AND QUANTITY SOLD INPUT SYSTEM\n");
    printf("===================================================================\n\n");
    printf("Instructions:\n");
    printf("  - Enter product number (integer) and quantity sold (integer).\n");
    printf("  - Separate values with a space or press Enter.\n");
    printf("  - To terminate input, press:\n");
    printf("        - Linux/Mac: Ctrl+D\n");
    printf("        - Windows:   Ctrl+D then Enter\n");
    printf("\n===================================================================\n\n");
    
    // sentinel-controlled iteration using EOF
    // ───────────────────────────────────────────────────────────────────────
    printf("Enter product number and quantity sold (or EOF to quit):\n");
    
    double sum = 0.0; // total retail value 
    while (scanf("%d %d", &product_number, &quantity_sold) == 2) {
        // determine the retail price for each product
        switch (product_number) {
            case 1:
                sum += 2.98 * quantity_sold;
                break;
            case 2:
                sum += 4.50 * quantity_sold;
                break;
            case 3:
                sum += 9.98 * quantity_sold;
                break;
            case 4:
                sum += 4.49 * quantity_sold;
                break;
            case 5:
                sum += 6.87 * quantity_sold;
                break;
            default:
                printf("ERROR: Invalid product number %d. Please enter 1-5.\n\n", 
                            product_number);
                break;
        }

        if (product_number >= 1 && product_number <= 5) { 
            // process the input pair
            printf("  --> Product #%-6d | Quantity Sold for One Day:  %d\n", 
                            product_number, quantity_sold);
        }
        
        // prompt for next input
        printf("Enter product number and retail price (or EOF to quit):\n");
    }
    // ───────────────────────────────────────────────────────────────────────
    
    // ━━━━━━━━━━━━━━━━━
    // termination phase
    // ━━━━━━━━━━━━━━━━━
    printf("\n===================================================================\n");
    printf("                 EOF detected. Program terminated.\n");
    printf("===================================================================\n");
    printf("Total retail value: %.2f $", sum);

    return 0;
}


/****************************************************************************
 * Site Note: Understanding scanf() Return Value and EOF Detection          *
 *                                                                          *
 * The condition 'scanf("%d %d", ...) == 2' checks if scanf successfully    *
 * read EXACTLY 2 values. This works as sentinel control because:           *
 *                                                                          *
 *   • scanf() returns the NUMBER of successfully read items                *
 *   • When EOF is encountered, scanf() returns EOF (typically -1)          *
 *   • Invalid input also causes scanf() to return less than 2              *
 *                                                                          *
 * Why 'while (scanf(...) == 2)' instead of '!= EOF'?                       *
 *                                                                          *
 *   • More robust: catches BOTH EOF and invalid input                      *
 *   • Invalid input (e.g., letters when expecting numbers) returns 0       *
 *   • EOF returns -1 (EOF constant)                                        *
 *   • Both cases (0 and -1) are != 2, so loop terminates correctly         *
 *                                                                          *
 * Robotics/Embedded Systems Context:                                       *
 *                                                                          *
 *   • Similar pattern used for serial port data reading.                   *
 *   • Sensor data validation: check if expected number of values received. *
 *   • Communication protocols: verify complete message reception.          *
 ****************************************************************************/