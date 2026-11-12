/*
Read n as int. Use for loop to read n values
The value 999 stops the loop immediately with break
Skip neg values with continue, skipped values use one attempt
0 is valid data
Calculate count, mean, maximum using only accepted values
If nothing was accepted print "Empty"


*/


#include <stdio.h>

int main()
{
    int n, value,count = 0, sum=0, maximum = 0;
    float mean;

    printf("N: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Value: ");
        scanf("%d",&value);

        if (value == 999)
            break;
        else if(value < 0)
            continue;

        count++;
        sum += value;

        if (value > maximum)
            maximum = value;
    }

    mean = (float) sum / count;
    if (count != 0) {
        printf("count : %d, mean: %.2f, maximum: %d",count,mean,maximum);
    }
    else
        printf("Empty");
    return 0;
}