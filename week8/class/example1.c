#include <stdio.h>

unsigned long factorial_Recursive(unsigned long number)
{
    if (number <= 1)
        return 1;
    else
        return number * factorial_Recursive(number-1);
}

int main()
{
    int f;
    printf(" ?! factorial do you want to calculate? ");
    scanf("%d",&f);
    f = factorial_Recursive(f);
    printf("Factorial result: %d",f);

    return 0;
}