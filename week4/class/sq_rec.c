// calculate area of rectangular or square based on user preference

#include <stdio.h>

int main()
{
    float side1, side2, area;
    char ch;

    printf("If you want to calculate the area of rectangular type r/R or s/S to calculate the area of square: ");
    scanf("%c",&ch);

    if (ch == 's' || ch == 'S')
    {
        printf("Enter one side of square: ");
        scanf("%f",&side1);
        area = side1*side1;
        printf("Area of square: %.2f", area);
    }
    if (ch == 'r' || ch == 'R')
    {
        printf("Enter short and long side of rectangular: ");
        scanf("%f %f", &side1, &side2);
        area = side1*side2;
        printf("Area of rectangular: %.2f", area);
    }
    if (!(ch == 's' || ch == 'S' || ch == 'r' || ch == 'R'))
    {
        printf("Wrong Entry");
    }

    return 0;
}