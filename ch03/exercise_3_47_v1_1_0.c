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
 * Created on: 21-01-2025
 */

// decryption program
#include <stdio.h>
#include <string.h>
#include <ctype.h> // for isdigit()

int main(void) {
    // initialization phase
    //---------------------------------------------------------------------------------------
    // read a string
    char encrypted_data[5];
    printf("%s","Enter a four-digit encrypted integer (including leading zeros if any): ");
    fgets(encrypted_data, sizeof(encrypted_data), stdin);
    //---------------------------------------------------------------------------------------
    
    // processing phase
    //--------------------------------------------------------------------
    // swapping digits to reverse the encryption
    // swap the first and third digits, and the second and fourth digits

    // swapping process logic
    //**************************************
    // swap first and third
    char temp = encrypted_data[0];
    encrypted_data[0] = encrypted_data[2];
    encrypted_data[2] = temp;

    // swap second and fourth
    temp = encrypted_data[1];
    encrypted_data[1] = encrypted_data[3];
    encrypted_data[3] = temp;
    //**************************************
    //--------------------------------------------------------------------
    
    // termination phase
    // show result
    printf("Decrypted data (after swapping): %04s\n", encrypted_data );

    return 0;
}