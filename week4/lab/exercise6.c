/*
    read a Lowercase Letter a-z
    convert the letter to uppercase without library
    gap 'a' - 'A'
    print the letter and code lowercase uppercase
    %c and %d 
*/

#include <stdio.h>

int main(void)
{
    char ch_low, ch_up;
    printf("Please enter a lowercase: ");
    scanf(" %c", &ch_low);
    ch_up = ch_low - ('a'- 'A');
    printf("The uppercase is %c and its code is %d\nfor lower %c and its code is %d\n",ch_up, ch_up, ch_low, ch_low);

    return 0;
}