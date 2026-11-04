// Calculate mod of a number by using if-else structure
// If the number can be divided to 7 or not

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 7 == 0)
    {
        printf("Number %d can be divided to 7\n", num);
    }
    else
    {
        printf("Number %d cannot be divided to 7\n", num);
    }

    return 0;
}