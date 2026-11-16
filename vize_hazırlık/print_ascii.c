/*
Write a C program that takes a single character input from the user
and determine whether
it is an uppercase letter, lowercase letter, digit or special symbol
Then prints the ascii value of the character
*/


#include <stdio.h>

int main()
{

    char ch;
    printf("Input: ");
    scanf(" %c",&ch);
    int value = ch;
    if (ch >= 65 && ch <=90)
        printf("Uppercase\n");
    else if(ch >= 97 && ch <= 122)
        printf("Lowercase\n");
    else if(ch>=48 && ch<=57)
        printf("Digit\n");
    else
        printf("Special\n");

    printf("%d",ch);
}