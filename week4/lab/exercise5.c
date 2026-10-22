/*
    read fahrenheit temperature float
    convert to celsius and kelvin (float)
    print celsius and kelvin
    c = (f-32) * 5.0 / 9.0
    k = c + 273.5
    print temperature is below or at freezing
        above or at boiling
    fahreneit 2 decimal
    celsius 4 decimal
    kelvin %3.2f
*/

#include <stdio.h>

int main(void)
{
    float fahreneit, celcius, kelvin;
    printf("Enter the temperature as fahrenheit: ");
    scanf("%f",&fahreneit);

    celcius = (fahreneit - 32) * 5.0 / 9.0;
    kelvin = celcius + 273.5;

    printf("Fahrenit: %.2f\n", fahreneit);
    printf("Celcius %.4f\n", celcius);
    printf("Kelvin: %3.2f\n", kelvin);

    if (celcius >= 100)
    {
        printf("At or above boiling point\n");
    }
    else if (celcius <= 0)
    {
        printf("At or below freezing point\n");
    }

    return 0;
}