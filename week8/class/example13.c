// sum of odd numbers (iterative)
#include <stdio.h>

int oddsum(int N)
{
    int i, sum = 0;
    for (i=1;i<=N;i++)
    {
        if (i%2 == 1)
            sum+=i;
    }
    return sum;
}

int main()
{
    int N;
    printf("Enter N: ");
    scanf("%d",&N);
    N = oddsum(N);
    printf("Sum of odd numbers: %d",N);
    return 0;
}