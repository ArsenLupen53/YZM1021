/*
Question 1

Rectangular table: Length and width 
Read Length and width as an integer from user
Then calculate and print area and the perimeter of the table

*/

#include <stdio.h>
int main(void)
{
    int length, width, area, perimeter;
    printf("Please enter the width of rectangular: ");
    scanf("%d", &width);

    printf("Please enter the length of rectangular: ");
    scanf("%d", &length);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("The area of rectangular: %d\nPerimeter of the table: %d\n", area, perimeter);
    return 0;
}
