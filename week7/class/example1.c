#include <stdio.h>

int main()
{
    char ch;
    printf("enter a letter: ");

    do {
        scanf(" %c",&ch);
        printf("%c",ch+1);
    } while (ch!= '\r');

    return 0;
}