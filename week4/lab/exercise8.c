/*
Three integer numbers from user in one line. From 0 to 1000
Then calculate sum of them and their average. 
Convert the sum to double before dividing by three
Then convert the avearge to int and find the largest number
Print Mean, Whole, Max
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, sum, whole, max;
    double mean;
    printf("Readings: ");
    scanf("%d %d %d\n", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    mean = (double) sum / 3;

    max = num1;
    if (max < num2)
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }

    printf("Sum: %d\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Whole: %0.f\n", mean);
    printf("Max: %d\n",max);

    return 0;
}