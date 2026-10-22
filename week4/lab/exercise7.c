/*
    get radius value from user as float
    calculate the area and perimeter of the circle

    PI, define 
    tranform radius which is in cm, meters
    const float num, 100
    1 meter = 100 cm
*/
#include <stdio.h>
# define PI 3.14

int main(void)
{
    const float NUM = 100;
    float radius;
    double area, perimeter;
    
    printf("Please enter the radius of circle (cm): ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;
    radius = radius / NUM;

    printf("Radius in meter: %.2f\n", radius);
    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
    printf("Radius as scientific: %.2e\n", radius);

    return 0;
}