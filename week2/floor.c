//floor a number
#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    double sx;

    printf("Enter a floating point number: ");
    scanf("%f", &x);

    sx = floor(x);
    printf("Result is %.2f\n", sx);

    return 0;
}
