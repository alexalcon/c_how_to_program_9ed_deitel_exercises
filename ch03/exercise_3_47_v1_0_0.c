/**
 * File: exercise_3_47_v1_0_0.c
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon 
 * -------------------------------------------------------------------------------------------------
 * Description: ✰ (Enforcing Privacy with Cryptography) The explosive growth of Internet 
 *                 communications and data storage on Internet-connected computers has greatly
 *                 increased privacy concerns. The field of cryptography is concerned with coding 
 *                 data to make it difficult (and hopefully—with the most advanced 
 *                 schemes—impossible) for unauthorized users to read. In this exercise, you’ll 
 *                 investigate a simple scheme for encrypting and decrypting data. A company that 
 *                 wants to send data over the Internet has asked you to write a program that will
 *                 encrypt it so that it may be transmitted more securely. All the data is 
 *                 transmitted as four-digit integers. Your application should read a four-digit 
 *                 integer entered by the user and encrypt it as follows: Replace each digit with 
 *                 the result of adding 7 to the digit and getting the remainder after dividing the
 *                 new value by 10. Then swap the first digit with the third, and swap the second   
 *                 digit with the fourth. Then print the encrypted integer. Write a separate 
 *                 application that inputs an encrypted four-digit integer and decrypts it (by
 *                 reversing the encryption scheme) to form the original number. [Optional reading
 *                 project:] In industrial-strength applications, you’ll want to use much stronger 
 *                 encryption techniques than presented in this exercise. Research “public-key 
 *                 cryptography” in general and the PGP (Pretty Good Privacy) specific public-key 
 *                 scheme. You may also want to investigate the RSA scheme, which is widely used in
 *                 industrial-strength applications.
 * -------------------------------------------------------------------------------------------------
 * Created on: 25-01-2025
 */

// encryption program
#include <stdio.h>

int main(void) {
    // initialization phase
    //----------------------------------------------
    int encrypted_data = 0;
    int multiplier = 100;

    int data = 0;
    printf("%s", "Enter a four digit integer: ");
    scanf("%d", &data);
    //----------------------------------------------

    // processing phase
    //-----------------------------------------------------------
    // main logic
    //*********************************************************
    while (data != 0) {
        int digit = data % 10; // getting data last digit

        encrypted_data += (multiplier * ((digit + 7) % 10));
        
        data /= 10; // getting off data last digit

        // once every last digit is obtained and 
        // encrypted the multiplier is updated
        /**
         * e.g: for 1234 then the first encrypted process 
         *      (arithmetic process of adding 7 and computing 
         *      mod 10) result is 1098 (in reversal order), 
         *      i.e., 8901 is the correct first encrypted 
         *      process
         * 
         *      thus, for the second encrypted process 
         *      (swapping numbers), 8901 --> 0189 or 
         *      1098 --> 0189  
         * 
         *      now, (1098 --> 0189) then (in line 48):
         *
         *          0189 = 1*100 + 0*1000 + 9*1 + 9*10
         */ 
        if (multiplier == 1000) {
            multiplier = 1;
        } 
        else {
            multiplier *= 10;
        }
    }
    //*********************************************************
    //-----------------------------------------------------------
    
    // termination phase
    // show result
    /**
     * print the number with leading zeros 
     * and ensuring a width of 4 digits
     * 
     *      - %d: format specifier for integers
     *      - 04: ensures the number is at least 4 
     *        characters wide, with leading zeros 
     *        if necessary
     */
    printf("Encrypted data: %04d\n", encrypted_data);
 
    return 0;
}