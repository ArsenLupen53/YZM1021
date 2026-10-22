/*
    a number from user
    print even or odd
    without using mod
*/

#include <stdio.h>

int main(void)
{
    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    int divide = number / 2;
    int result = number - (2*divide);
    if (result == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
