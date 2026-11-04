#include <stdio.h>

int main(void)
{
    int total = 0,num,count = 0;
    float avg;
    printf("Enter a number to sum or -1 to exit: ");
    scanf("%d", &num);

    while (num!=-1)
    {
        total = total + num;
        count++;
        printf("Enter a number to sum or -1 to exit: ");
        scanf("%d", &num);
    }
    if (count == 0)
        printf("No entry from the user!\n");
    else
    {
        avg = (float) total/count;
        printf("Average is %f\n", avg);
    }

    return 0;
}