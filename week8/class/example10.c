// Generate 20 numbers between 1 and 6 and format them 4x5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=1;i<=20;i++)
    {
        printf("%10d",1+rand()%6);

        if (i%5 == 0)
            printf("\n");
    }
    return 0;
}