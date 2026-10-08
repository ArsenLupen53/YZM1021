/*
We buy two packs of pens:
Red Pack: 5 pens. Price of the whole pack: 12.50
Blue Pack: 3 pens. Price of the whole pack: 7.25

Store the two pen counts as int values and the two pack prices as float values.
Add the pack prices to find the total payment.
Add the counts to find the total number of pens.

Print both counts. Pack prices and both totals.
Display prices with two digits after the decimal point.
*/

#include <stdio.h>

int main(void)
{
    int rpens,bpens,total;
    float rprice,bprice,tprice;

    rpens = 5;
    bpens = 3;
    total = rpens + bpens;

    rprice = 12.50;
    bprice = 7.25;
    tprice = rprice + bprice;

    printf("Number of Red pack: %d\n", rpens);
    printf("Number of Blue pack: %d\n", bpens);
    printf("Number of Total: %d\n", total);
    
    printf("Price of red: %.2f\n", rprice);
    printf("Price of blue: %.2f\n", bprice);
    printf("Price of total: %.2f\n", tprice);

    return 0;
}