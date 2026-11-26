#include <stdio.h>

int sum2(int x, int y);

int main()
{
    int a,b;
    printf("Enter two numbers with a space between them: ");
    scanf("%d %d",&a,&b);
    printf("Result is %d",sum2(a,b));
    return 0;
}

int sum2(int x,int y)
{
    int result;
    result = x + y;
    return result;
}