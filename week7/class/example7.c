//average of 5 exam scores that are entered form keyboard
#include <stdio.h>

int main()
{
    float sum = 0.0;
    float score,ctr;

    printf("enter 5 exam scores: ");
    for (ctr=0;ctr<5;ctr++)
    {
        printf("Enter student score: ");
        scanf("%f",&score);
        sum+=score;
    }
    printf("Average is %f",sum/ctr);
    return 0;
}