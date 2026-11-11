// ASCII conversion values of characters
#include <stdio.h>

int main()
{
    char ch;
    printf("enter a number: ");

    do {
        scanf(" %c",&ch);
        printf("%d",ch);
    }
    while (ch!='\r');

    return 0;

    // normally this code inclues conio.h but in macos it is not standard
}