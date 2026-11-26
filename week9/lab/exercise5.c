/*
n rolls of six_sided die
seed and n---> int in main
Seed the generator ONCE with srand f. before the loop
Write roll_die(void) returns 1 + rand() % 6
call it once per roll
Print: Low(1-3), High (4-6), Sum

*/

#include <stdio.h>
#include <stdlib.h>

int roll_die(void);

int main()
{
    int n,seed, face,low = 0, high = 0, sum = 0; 
    printf("Seed, n: ");
    scanf("%d %d",&seed, &n);

    srand((unsigned int)seed);
    for (int i = 0; i < n; i++)
    {
        face = roll_die();
        sum+=face;
        if (face <= 3)
            low++;
        else
            high++;
    }

    printf("Low: %d High: %d Sum: %d",low,high,sum);

    return 0;
}

int roll_die(void)
{
    return 1 + rand() % 6;
}
