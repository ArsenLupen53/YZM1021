// memory concepts

#include <stdio.h>
int main(void)
{
    int number1 = 15;
    int number2 = 20;
    int sum = number1 + number2;

    printf("%p\n %p\n %p\n", &number1, &number2, &sum);

    return 0;
}