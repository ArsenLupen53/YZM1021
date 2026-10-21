// Calculate the are of a circle

#include <stdio.h>

#define PI 3.14

int main()
{
    float r, perimeter, area;
    printf("Enter radius: ");
    scanf("%f", &r);

    perimeter = 2*PI*r;
    area = PI*r*r;

    printf("Perimeter of the circle: %f\n",perimeter);
    printf("Area of the circle: %f\n", area);

    return 0;
}