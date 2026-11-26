#include <stdio.h>

void sum(int a);

int main()
{
    int N;
    printf("Enter N value:  ");
    scanf("%d",&N);
    sum(N);
    return 0;
}

void sum(int a)
{
    int s,i;
    s = 0;
    for (i=1;i<=a;i++)
        s+=i;
    printf("Result is %d\n",s);
}