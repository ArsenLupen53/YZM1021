/*
    machine cuts panles in square and rectangle
    get char from user as input, s/S or r/R
    if it is not print out it is invalid, finish the program
    calculate the area based on the shape, one variable from user (float)
    if it is rectangular then you are gonna take two variables (float)
    20 square meters, the given area is bigger than 20
    define constant variable for the maximum area
    it is too large, print it is okay
*/

#include <stdio.h>

int main(void)
{
    const double MAX_AREA = 20.0;
    char shape;
    double area, perimeter;
    float a, b;

    printf("Shape: ");
    scanf(" %c", &shape);
    if (!(shape == 's' || shape == 'S' || shape == 'r' || shape == 'R'))
    {
        printf("Invalid");
        return 0;
    }
    if (shape == 's' || shape == 'S')
    {
        printf("Side: ");
        scanf("%f", &a);
        area = a * a;
        perimeter = 4 * a;
    }
    if (shape == 'r' || shape == 'R')
    {
        printf("Sides: ");
        scanf("%f %f", &a, &b);
        area = a * b;
        perimeter = 2 * a + 2 * b;
    }

    printf("Area: %f, Perimeter: %f\n", area, perimeter);
    if (area <= MAX_AREA)
    {
        printf("Ok");
    }
    else
    {
        printf("Large");
    }
    return 0;
}