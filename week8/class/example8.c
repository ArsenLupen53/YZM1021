// Finding larger number from two numbers
#include <stdio.h>

int larger_of(int a, int b);

int main()
{
    int x,y,z;
    puts("Enter two different integer values: ");
    scanf("%d %d",&x,&y);

    z = larger_of(x,y);
    printf("The larger value is %d\n",z);
    return 0;
}

int larger_of(int a, int b)
{
    if (a<b)
        return b;
    else
        return a;
}