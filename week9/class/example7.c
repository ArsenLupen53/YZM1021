#include <stdio.h>

char typevar(void);

int main()
{
    printf("Sign of the number= %c",typevar());
    return 0;
}

char typevar(void)
{
    float c;
    printf("Enter a real number: ");
    scanf("%f",&c);
    if (c > 0)
        return 'p';
    else if (c < 0)
        return 'n';
    else
        return 'z';
}