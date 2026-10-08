// Square root of a number
#include <stdio.h>
#include <math.h>

int main()
{
    float a,z;

    printf("Enter a number: ");
    scanf("%f", &a);

    z = sqrt(a);
    printf("Square root of %.2f is %.2f",a,z);
    
    return 0;
}