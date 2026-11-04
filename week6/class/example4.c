// Find the roots of a second order polynomial
// Print the roots
// Get coefficients from the user
// ax^2 +bx + c = 0

#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,c;
    float D,x1,x2;
    printf("Enter the coefficents of polynomial: ");
    scanf("%d %d %d",&a,&b,&c);

    D = b*b-4*a*c;

    if (D>0)
    {
        x1 = (-b+sqrt(D))/(2*a);
        x2 = (-b-sqrt(D))/(2*a);
        printf("Roots are %f and %f\n",x1,x2);
    }
    else if (D==0)
    {
        x1 = -b/(2*a);
        printf("Multiple roots: %f\n",x1);
    }
    else
        printf("Complex roots");

    return 0;
}