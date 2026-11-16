/*
Write a C program that takes two characters and a number from the user and creates an alternating hourglass pattern.
*/

#include <stdio.h>

int main()
{
    char f,s;
    int n, i = 0, z = 0;
    printf(": ");
    scanf(" %c %c%d",&f,&s,&n);

    while(i<n)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int a = 0; a < n - i; a++)
        {
            if (i % 2 == 0)
                printf("%c",s);
            else
                printf("%c",f);
            printf(" ");
        }
        printf("\n");
        i++;
    }

    while (z < n)
    {
        for (int a = 0; a < n - z; a++)
        {
            printf(" ");
        }
        for (int j = 0; j < z; j++){
            if (z % 2 == 0)
                printf("%c",s);
            else
                printf("%c",f);
            printf(" ");
        }
        printf("\n");
        z++;
    }


    

}