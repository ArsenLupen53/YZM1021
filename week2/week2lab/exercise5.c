/*
program
    get an input from user as float
    take square root
    calculate square
    round up SQUARE ROOT of the number and
    round down  SQUARE ROOT of the number
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float input, square_root, square, rounded_up, rounded_down;
    printf("Enter a number: ");
    scanf("%f", &input);

    square_root = sqrt(input);
    square = pow(input, 2);
    rounded_up = ceil(square_root);
    rounded_down = floor(square_root);

    printf("Square root: %.2f\n", square_root);
    printf("Square: %.2f\n", square);
    printf("Rounded up squared root %0.f\n", rounded_up);
    printf("Rounded down squared root %0.f\n", rounded_down);

    return 0;
}
