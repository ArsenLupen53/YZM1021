// Summing numbers from 1 to N
#include <stdio.h>

void sum(void);

int main()
{
    sum();
    return 0;
}

void sum(void)
{
    int s,i,N;
    s = 0;
    printf("Enter N value: ");
    scanf("%d",&N);
    for (i=1;i<=N;i++)
        s+=i;
    printf("Result is %d\n",s);
}