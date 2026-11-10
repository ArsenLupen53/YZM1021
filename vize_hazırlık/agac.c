#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int z = 0; z < 2*i - 1; z++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int a = n - 1; a > 0; a--)
    {
            for (int b = 0; b < n - a; b++)
        {
            printf(" ");
        }

        for (int c = 0; c < 2*a - 1; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}