/*
craft worshop

1 meters long

program:
    take an input from as float, original length of ribbon. for ex 3.7 meters
    find the maximum pieces that you can obtain 3
    you have to calculate the lenth of ribbon that you have to buy 4 meters long ribbon
    print these two values after you calculate them on the terminal.
    
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float original_length, max_piece, length_to_buy;
    printf("Enter the original length of ribbon: ");
    scanf("%f",&original_length);

    max_piece = floor(original_length);
    length_to_buy = ceil(original_length);
    
    printf("Maximum pieces: %0.f\n", max_piece);
    printf("Length to buy: %0.f\n", length_to_buy);

    return (0);
}