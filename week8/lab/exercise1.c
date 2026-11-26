/* Question 1
Read "quantity" as an int, unit "price" as a float
Write double total_cost(int quantity, double price) to return quantity * price
Reading and printing only in main
Define the whole funciton ABOVE main

*/

#include <stdio.h>

double total_cost(int quantity, double price)
{
    return quantity * price;
}


int main(void)
{
    int quantity;
    double price;
    
    printf("Quantity price: ");
    scanf("%d %lf",&quantity,&price);
    printf("Total: %.2lf\n",total_cost(quantity,price));

    
    return 0;
}