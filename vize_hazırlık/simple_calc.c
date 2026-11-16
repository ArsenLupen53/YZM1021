#include <stdio.h>

int main()
{
    char ch;
    double a,b;
    scanf(" %c",&ch);
    scanf("%lf%lf",&a,&b);

    switch (ch)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",a,b,a+b);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",a,b,a-b);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",a,b,a*b);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",a,b,a/b);
            break;

    }
    return 0;
}