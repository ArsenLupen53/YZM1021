/*
orders from parcels

small, medium, large

takes ordered parcels size, s, m, l (lowercase, uppercase)

s:10, m:20, l:30
quantity of parcels, how many parcels that ordered by customer
fee

quantity: 5, size: medium
fee = 100

quantity is larger than 5, %10 discount
*/


#include <stdio.h>

int main()
{
    char size;
    int quantity;
    float fee;

    printf("Size: ");
    scanf(" %c",&size);

    switch (size)
    {
        case 's':
        case 'S':
            fee = quantity * 10;
            break;
        case 'm':
        case 'M':
            fee = quantity * 20;
            break;
        case 'l ':
        case 'L':
            fee = quantity * 30;
            break;
        default:
            printf("Error");
            return 0;
    }

    printf("Quantity: ");
    scanf("%d",&quantity);

    if (quantity >= 5)
        fee *= 0.9;

    printf("Total %.2f",fee);
    return 0;
}