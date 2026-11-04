#include <stdio.h>

int main(void)
{
    char ch;
    int a,b;

    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);

    printf("Which one you want to do S,C,M,D: ");
    scanf(" %c",&ch);

    if (ch=='S')
        printf("%d",a+b);
    else if (ch=='C')
        printf("%d", a-b);
    else if (ch=='M')
        printf("%d", a*b);
    else if (ch=='D')
        printf("%f",(float) a/b);
    else
        printf("Wrong Entry!!!\n");

    return 0;
    }