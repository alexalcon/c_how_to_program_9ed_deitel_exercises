/**
 * File: exercise_3_27_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Validating User Input) Modify the program in Figure 3.6 to validate its inputs. 
 *                 For each input, if the value is other than 1 or 2, keep looping until the user 
 *                 enters a correct value.
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // initialize variables in definitions 
    int passes = 0; 
    int failures = 0; 
    int student = 1;  

    // process 10 students using counter-controlled loop 
    while (student <= 10) {
        // prompt user for input and obtain value from user 
        printf("%s", "Enter result (1=pass,2=fail): ");
        int result = 0; // one exam result 
        scanf("%d", &result);

        // validate input
        while(result != 1 && result != 2) {
            printf("%s", "Invalid result Please enter 1 for pass or 2 for fail: ");
            scanf("%d", &result);
        }

        // if result 1, increment passes 
        if (result == 1) {     
            passes = passes + 1;
        } // end if 
        else { // otherwise, increment failures 
            failures = failures + 1;
        } // end else 

        student = student + 1; // increment student counter  
    } // end while 

    // termination phase; display number of passes and failures 
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

    // if more than eight students passed, print "Bonus to instructor!"
    if (passes > 8) {
        puts("Bonus to instructor!");
    } // end if 
} // end function main 