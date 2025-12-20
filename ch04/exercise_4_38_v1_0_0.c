/**
 * File: exercise_4_38_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (“The Twelve Days of Christmas” Song) Write a program that uses iteration and 
 *                 switch statements to print the song “The Twelve Days of Christmas.” One switch 
 *                 statement should be used to print the day (“first,” “second,” etc.). A separate
 *                 switch statement should be used to print the remainder of each verse.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 20-12-2025
 */

/**
 * the song has this cumulative structure:
 * 
 *      On the first day of Christmas, my true love sent to me:
 *      A partridge in a pear tree.
 * 
 *      On the second day of Christmas, my true love sent to me:
 *      Two turtle doves.
 *      A partridge in a pear tree.
 *      
 *      On the third day of Christmas, my true love sent to me:
 *      Three French hens.
 *      Two turtle doves.
 *      A partridge in a pear tree.
 * 
 *      On the fourth day of Christmas, my true love sent to me:
 *      Four calling birds.
 *      Three French hens.
 *      Two turtle doves.
 *      A partridge in a pear tree.
 * 
 *      .
 *      .
 *      .
 * 
 *      ref: https://www.vox.com/21796404/12-days-of-christmas-explained
 * 
 * so, the song has this cumulative pattern: 
 * 
 *      1 - 2 1 - 3 2 1 - 4 3 2 1 - 5 4 3 2 1 - ... - 12 11 10 ... 1 
 */

#include <stdio.h>

int main(void) {
    for (int counter = 1; counter <= 12; ++counter) {
        switch (counter) {
            case 1:
                printf("On the first day of Christmas, my true love sent to me:\n");
                break;

            case 2:
                printf("\nOn the second day of Christmas, my true love sent to me:\n");
                break;

            case 3:
                printf("\nOn the third day of Christmas, my true love sent to me:\n");
                break;

            case 4:
                printf("\nOn the fourth day of Christmas, my true love sent to me:\n");
                break;

            case 5:
                printf("\nOn the fifth day of Christmas, my true love sent to me:\n");
                break;

            case 6:
                printf("\nOn the sixth day of Christmas, my true love sent to me:\n");
                break;

            case 7:
                printf("\nOn the seventh day of Christmas, my true love sent to me:\n");
                break;

            case 8:
                printf("\nOn the eighth day of Christmas, my true love sent to me:\n");
                break;

            case 9:
                printf("\nOn the ninth day of Christmas, my true love sent to me:\n");
                break;

            case 10:
                printf("\nOn the tenth day of Christmas, my true love sent to me:\n");
                break;

            case 11:
                printf("\nOn the eleventh day of Christmas, my true love sent to me:\n");
                break;

            case 12:
                printf("\nOn the twelveth day of Christmas, my true love sent to me:\n");
                break;
        }

        switch (counter) {
            case 12:
                printf("Twelve Drummers Drumming.\n");
                /* fall through */
            case 11:
                printf("Eleven Pipers Piping.\n");
                /* fall through */
            case 10:
                printf("Ten Lords a-Leaping.\n");
                /* fall through */
            case 9:
                printf("Nine Ladies Dancing.\n");
                /* fall through */
            case 8:
                printf("Eight Maids a-Milking.\n");
                /* fall through */
            case 7:
                printf("Seven Swans a-Swimming.\n");
                /* fall through */
            case 6:
                printf("Six Geese a-Laying.\n");
                /* fall through */
            case 5:
                printf("Five Golden Rings.\n");
                /* fall through */
            case 4:
                printf("Four Calling Birds.\n");
                /* fall through */
            case 3:
                printf("Three French Hens.\n");
                /* fall through */
            case 2:
                printf("Two Turtle Doves.\n");
                /* fall through */
            case 1:
                printf("A Partridge in a Pear Tree.\n");
                break;
        }
    }

    return 0;
}