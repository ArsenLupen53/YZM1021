//ceil a number
#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    double sx;

    printf("Enter a ceiling point number: ");
    scanf("%f", &x);

    sx = ceil(x);
    printf("Result is %.0f\n", sx);

    return 0;
}
