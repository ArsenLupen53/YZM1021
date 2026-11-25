// Summing numbers from 1 to N
#include <stdio.h>

int sum(int a);

int main()
{
    int N, result;
    printf("Enter N value: ");
    scanf("%d",&N);
    result = sum(N);
    printf("Result is %d\n",result);

    return 0;
}

int sum(int a)
{
    int s,i;
    s = 0;
    for (i=1;i<=a;i++)
        s+=i;
    return s;
}