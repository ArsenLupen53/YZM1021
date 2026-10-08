/*
Rectangular panel
read long and shortside in centimeters as integers
calculate the area and perimeter
diagonal = sqrt(a^2 + b^2) pow sqrt

floor and ceil to round up and down diagonal

print area, perimeter, diagonal, rounded diagonal values
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int longside, shortside, area, perimeter;
    float diagonal, rounded_up_diagonal, rounded_down_diagonal;

    printf("Enter the long side of rectangle: ");
    scanf("%d", &longside);
    printf("Enter the short side of rectangle: ");
    scanf("%d", &shortside);

    area = longside * shortside;
    perimeter = 2 * (longside + shortside);
    diagonal = sqrt(pow(longside,2) + pow(shortside,2));
    rounded_up_diagonal = ceil(diagonal);
    rounded_down_diagonal = floor(diagonal);

    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    printf("Diagonal: %f\n", diagonal);
    printf("Rounded up diagonal: %.0f\n", rounded_up_diagonal);
    printf("Rounded down diagonal: %.0f\n", rounded_down_diagonal);

    return 0;
}