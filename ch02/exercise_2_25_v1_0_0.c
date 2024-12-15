/**
 * File: exercise_2_25_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: 2.25 (Integer Value of a Character) Here’s a peek ahead. In this chapter, you 
 *                   learned about integers and the type int. C can also represent uppercase 
 *                   letters, lowercase letters and a considerable variety of special symbols. 
 *                   C uses small integers internally to represent each different character. 
 *                   The set of characters a computer uses together with the corresponding integer
 *                   representations for those characters is called that computer’s character set.
 *                   You can display the integer equivalent of uppercase A, for example, by 
 *                   executing the statement    
 * 
 *                          printf("%d", 'A'); 
 * 
 *                   Write a C program that displays the integer equivalents of some uppercase 
 *                   letters, lowercase letters, digits and special symbols. At a minimum,
 *                   determine the integer equivalents of the following: A B C a b c 0 1 2 $ * + /
 *                   and the space character.
 * -------------------------------------------------------------------------------------------------
 * Created on: 23-11-2023 
 */

#include <stdio.h>

int main(void) {
    printf("Integer equivalent of 'A': %d\n", 'A');
    printf("Integer equivalent of 'B': %d\n", 'B');
    printf("Integer equivalent of 'C': %d\n", 'C');
    printf("Integer equivalent of 'a': %d\n", 'a');
    printf("Integer equivalent of 'b': %d\n", 'b');
    printf("Integer equivalent of 'c': %d\n", 'c');
    printf("Integer equivalent of '0': %d\n", '0');
    printf("Integer equivalent of '1': %d\n", '1');
    printf("Integer equivalent of '2': %d\n", '2');
    printf("Integer equivalent of '$': %d\n", '$');
    printf("Integer equivalent of '*': %d\n", '*');
    printf("Integer equivalent of '+': %d\n", '+');
    printf("Integer equivalent of '/': %d\n", '/');
    printf("Integer equivalent of ' ': %d", ' ');

    return 0;
} // end function main