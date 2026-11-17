/*
a) Read execution-time measurements from the keyboard until the user
enters -1.
b) Find the longest consecutive sequence in which each measurement is smaller
than the previous measurement.
c) Calculate the number of measurements in this sequence.
d) Determine the starting and ending positions of this sequence.
e) If multiple sequences have the same maximum length, report the first one
encountered
*/

#include <stdio.h>

int main()
{
    int n,last = 0,count = 0, curLen = 0, curStart = 0, bestLen = 0, bestStart = 0;

    printf("Read (-1 to quit): ");
    scanf("%d",&n);

    while (n!=-1)
    {
        count++;
        if (count == 1)
        {
            curLen=1;
            curStart=1;
        }
        else if (last > n)
        {
            curLen++;
        }
        else
        {
            curStart=count;
            curLen=1;
        }

        if (curLen > bestLen)
        {
            bestStart = curStart;
            bestLen = curLen;
        }

        last = n;

        printf("Read (-1 to quit): ");
        scanf("%d",&n);
    }
    
    if (count == 0)
    {
        printf("You did not enter any number");
    }
    else
    {
        printf("Longest consecutive sequnce length: %d\n",bestLen);
        printf("Longest consecutive sequence start %d and ends %d\n",bestStart,bestStart+bestLen - 1);
    }


    return 0;
}