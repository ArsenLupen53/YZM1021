/* Question 8:

while or for
recursive function
function which calls themself inside of it

123 -> 6
2735 -> 17
*/

#include <stdio.h>

int sum_of_digits(int number);

int main(void)
{
    int n,sum;
    printf("Value: ");
    scanf("%d",&n);

    sum = sum_of_digits(n);
    printf("Sum of digits: %d\n",sum);
    return 0;
}

// Benim çözüm:
int sum_of_digits(int number)
{
    if (number>0)
        return number % 10 + sum_of_digits(number / 10);
    else
        return 0;
}

/*
Hocanın çözüm:

int sum_of_digits(int n)
{
    if (n == 0) return 0;
    int digit = n % 10;
    n = n / 10;

    return digit + sum_of_digits(n);
}
*/