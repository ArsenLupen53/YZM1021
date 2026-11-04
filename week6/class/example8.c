/* Find the max number and its location until a negative
number is entered from the keybord*/

#include <stdio.h>

int main(void)
{
    int num, max = 0,location = 0;

    printf("Enter a number or negative to exit: ");
    scanf("%d",&num);

    while (num>=0)
    {
        if (num > max)
            max = num;
        location++;
        printf("Enter a number or negative to exit: ");
        scanf("%d",&num);
    }

    printf("The max valude is %d and its location is %d", max, location);

    return 0;
}