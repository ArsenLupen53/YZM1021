/*
you buy something
you pay it with installments

number of months 
first month's payment

ex: 100
1: 100
2: 110
3: 121

use do while for this problem

you are going to print total payment
*/


#include <stdio.h>

int main()
{
    int month,i = 1;
    float payment, total = 0;

    printf("Number of month's for installments: ");
    scanf("%d",&month);
    printf("First payment: ");
    scanf("%f",&payment);

    do {
        printf("%d payment %.2f\n",i,payment);
        total += payment;
        payment *= 1.1;
        i++;

    } while (i <= month);

    printf("Total: %.2f",total);

    return 0;
}