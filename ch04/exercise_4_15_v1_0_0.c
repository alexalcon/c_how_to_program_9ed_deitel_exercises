/**
 * File: exercise_4_15_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Modified Compound-Interest Program) Modify the compound-interest 
 *                 program of Section 4.5 to repeat its steps for interest rates of 5%, 
 *                 6%, 7%, 8%, 9%, and 10%. Use a for loop to vary the interest rate.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 07-11-2025
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    // ━━━━━━━━━━━━━━━━━━━━
    // initialization phase
    // ━━━━━━━━━━━━━━━━━━━━
    //──────────────────────────────────────────────────────
    double principal = 1000; // $1000 initial principal

    // table headers
    //====================================================
    // horizontal up table header ruler
    for (int counter = 1 ; counter <= 136 ; ++counter) {
        printf("%s", "-");
    }
    puts("");
    
    // display headers
    printf("%s%22s%22s%22s%22s%22s%22s\n", 
                "Year", 
                "Deposit amount (5%)", 
                "Deposit amount (6%)",
                "Deposit amount (7%)",
                "Deposit amount (8%)",
                "Deposit amount (9%)",
                "Deposit amount (10%)" );
        
    // horizontal down table header ruler
    for (int counter = 1 ; counter <= 136 ; ++counter) {
        printf("%s", "-");
    }
    puts("");
    //====================================================
    //──────────────────────────────────────────────────────

    // ━━━━━━━━━━━━━━━━
    // processing phase
    // ━━━━━━━━━━━━━━━━
    // calculate amount on deposit for each of ten years
    for(int year = 1 ; year <= 10 ; ++year) { // counter-controlled iteration for yearly interest
        printf("%4d", year); // print year in each row
        
        double rate = 0.05; // initial interest rate (5%)
        for (int i = 1 ; i <= 6 ; ++i) { // calculate amount on deposit for each interest rate
            double amount = principal * pow(1 + rate, year); // compound-interest formula  
            printf("%22.2f", amount);

            rate += 0.01; // increase interest rate by one in each row
        }
        puts("");
    }

    // horizontal down table header ruler
    for (int counter = 1 ; counter <= 136 ; ++counter) {
        printf("%s", "-");
    }
    puts("");

    return 0;
}