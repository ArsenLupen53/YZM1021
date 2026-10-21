// Convert lowercase letter to uppercase one

#include <stdio.h>

int main()
{
    char chlow, chup;
    printf("Enter a lowercase letter: ");
    scanf("%c", &chlow);

    chup = chlow - 32;
    printf("Uppercase letter for %c is %c\n", chlow, chup);

    return 0;
}
