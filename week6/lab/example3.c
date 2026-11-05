/* Question 4:

sensor takes value from user
1 2 9 (positive integer)

val: 3
val: 11
...
val: -1

count 2
total 14
maximum 11
position 2
*/

#include <stdio.h>

int main(void)
{
    int val = 0,max = -1,count = 0,max_loc,total = 0;

    printf("Value: ");
    scanf("%d",&val);

    while (val != -1)
    {
        count++;
        if (val > max)
        {
            max_loc = count;
            max = val;
        }
        total += val;
        printf("Value: ");
        scanf("%d", &val);
    }

    if (count == 0)
    {
        printf("Empty");
    }
    else
    {
    printf("Sum: %d\n", total);
    printf("Mean: %.2f\n", (double) total / count - 1);
    printf("Maximum number is %d and its location is %d\n", max, max_loc);
    }

    return 0;
}