/* Question 2:

Workshop Labels n boxes from 1 to n.
Read n as an integer
Use one while Loop to print the Labels on one line
AND add them to a running total

Print Sum on the next line
Start the Label counter at 1 and the total at 0
Use ++ to advance the counter and
Use += to update the total
*/

#include <stdio.h>

int main(void)
{
    int n, label = 1, total = 0;
    printf("n:");
    scanf("%d", &n);

    while (label <= n)
    {   
        printf("%d ",label);
        total+=label;
        label++;
    }

    printf("\nSum: %d\n",total);
    return 0;
}