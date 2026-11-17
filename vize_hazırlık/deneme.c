#include <stdio.h>

int main()
{
    int n, i = 0;
    scanf("%d",&n);
    while (i<n)
    {  
        for (int z = 0; z < i;z++)
            printf(" ");
        for (int j = 0;j<n-i;j++)
            printf("*");
        printf("\n");
        i++;
    }
    return 0;
}