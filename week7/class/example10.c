#include <stdio.h>

int main()
{
    float side1, side2;
    double area;
    char ch;

    printf("Select your shape (s/S) for square, r/R for rectangular: ");
    scanf(" %c",&ch);

    switch (ch) {
        case 's': //or mantığı
        case 'S':
            printf("Enter the side of square: ");
            scanf("%f",&side1);
            area = side1 * side1;
            printf("area of a square %f",area);
            break;
        case 'r':
        case 'R':
            printf("Enter one side of rectangular: ");
            scanf("%f",&side1);
            printf("Enter other side of rectangular: ");
            scanf("%f",&side2);
            area = side1*side2;
            printf("area of the rectangular %f",area);
            break;
        default:
            printf("wrong selection\n");
    }

    return 0;
}