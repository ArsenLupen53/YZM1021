#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0)
        printf("Result is %d", x+y);
    else if (x >= 0 && y < 0)
        printf("Result is %d", x+y*y);
    else if (x<0 && y>0)
        printf("Result is %d", x*x+y);
    else
        printf("Result is %d", x*x+y*y);
    
    return 0;
}