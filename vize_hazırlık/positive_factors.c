/*
Write a C program that finds the positive factors of a number (except itself) in descending order
*/


#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i = n - 1;
    while(i>0)
    {
        if (n % i == 0)
            printf("%d ",i);
        i--;
    }
    return 0;
}