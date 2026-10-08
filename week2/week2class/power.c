// calculate power of a number
#include <stdio.h>
#include <math.h>

int main()
{
    float x,y,res;

    printf("Enter base and power for the number \n\n");
    printf("Base: ");
    scanf("%f", &x);
    printf("Power: ");
    scanf("%f", &y);
    
    res = pow(x,y);
    printf("Result is %.2f",res);
    return 0;
}
