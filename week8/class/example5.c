#include <stdio.h>

int sum(void);

int main()
{
    int result;
    result = sum();
    printf("Result is %d\n",result);
    return 0;
}

int sum(void)
{
    int s,i,N;
    printf("Enter N value: ");
    scanf("%d",&N);
    s = 0;
    for (i=1;i<=N;i++)
        s+=i;
    return s;
}