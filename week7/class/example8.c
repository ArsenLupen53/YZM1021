//calculation of annual rent increase
#include <stdio.h>
#include <math.h>

int main() 
{
    float amount,rent,rate;
    int i,year;

    printf("enter your current rent: ");
    scanf("%f",&rent);
    printf("Enter annual interest rate: ");
    scanf("%f",&rate);
    printf("How many years do you want to see your rent increase: ");
    scanf("%d",&year);

    printf("%4s%21s\n", "Year","Amount of deposit");

    for (i=1; i<=year;i++)
    {
        amount = rent * pow(1.0 + rate/100, i);
        printf("%4d%21.2f\n", i, amount);
    }
    return 0;
}