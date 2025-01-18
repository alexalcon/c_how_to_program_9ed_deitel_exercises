/**
 * File: exercise_3_31_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: (Another Dangling-Else Problem) Modify the following code to produce the output 
 *              shown. Use proper indentation techniques. You may not make any changes other than
 *              inserting braces. The compiler ignores the indentation in a program. We eliminated
 *              the indentation from the following code to make the problem more challenging. [Note:
 *              It’s possible that no modification is necessary.]
 *  
 *                  if (y == 8)
 *                  if (x == 5)
 *                  puts("@@@@@");
 *                  else
 *                  puts("#####");
 *                  puts("$$$$$");
 *                  puts("&&&&&"); 
 *              
 *                  a) Assuming x = 5 and y = 8, the following output is produced:
 *              
 *                      @@@@
 *                      $$$$$
 *                      &&&&&
 *              
 *                  b) Assuming x = 5 and y = 8, the following output is produced:
 *              
 *                      @@@@
 *              
 *                  c) Assuming x = 5 and y = 8, the following output is produced:
 *              
 *                      @@@@
 *                      &&&&&
 *              
 *                  d) Assuming x = 5 and y = 7, the following output is produced.
 *              
 *                      ##### 
 *                      $$$$$
 *                      &&&&& 
 * -------------------------------------------------------------------------------------------------
 * Created on: 18-01-2025
 */

#include <stdio.h>

int main(void) {
    // a) 
    int x = 5;
    int y = 8;

    if (y == 8)
    if (x == 5)
    puts("@@@@@");
    else
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");
 
    // b) 
    puts("");
    if (y == 8) {
        if (x == 5) {   
            puts("@@@@@");
        }
    }
    else {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&"); 
    }
    
    // c) 
    puts("");
    if (y == 8) {
        if (x == 5) {   
            puts("@@@@@");
        }
    }
    else {
        puts("#####");
        puts("$$$$$");
    }
    puts("&&&&&"); 
    

    // d) 
    puts("");
    y = 7;

    if (y == 8) {
        if (x == 5) {   
            puts("@@@@@");
        }
    }
    else {
        puts("#####");
        puts("$$$$$");
        puts("&&&&&"); 
    }
    
    return 0;
}