/* Find the max number and its location until a negative
number is entered from the keybord*/

#include <stdio.h>

int main(void)
{
    int num, max = 0,location = 0, max_location=0;

    printf("Enter a number or negative to exit: ");
    scanf("%d",&num);

    while (num>=0)
    {
        location++;
        if (num > max)
        {
            max = num;
            max_location = location;
        }
        printf("Enter a number or negative to exit: ");
        scanf("%d",&num);
    }

    printf("The max valude is %d and its location is %d", max, max_location);

    return 0;
}