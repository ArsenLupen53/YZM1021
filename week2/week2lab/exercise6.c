/*
program
    get an input from user as float
    take square root
    calculate square
    round up SQUARE ROOT of the number and
    round down  SQUARE ROOT of the number

    taking square of down-rounded value
    taking square of up-rounded value
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float input, square_root, square, rounded_up, rounded_down,square_of_rounded_up, square_of_rounded_down;
    printf("Enter a number: ");
    scanf("%f", &input);

    square_root = sqrt(input);
    square = pow(input, 2);
    rounded_up = ceil(square_root);
    rounded_down = floor(square_root);
    square_of_rounded_up = pow(input, 2);
    square_of_rounded_down = pow(input, 2);

    printf("Square root: %.2f\n", square_root);
    printf("Square: %.2f\n", square);
    printf("Rounded up squared root %0.f\n", rounded_up);
    printf("Rounded down squared root %0.f\n", rounded_down);
    printf("Square of rounded up: %.2f\n", square_of_rounded_up);
    printf("Square of rounded down: %.2f\n", square_of_rounded_down);

    return 0;
}
