/*

register products
ID, group code: a,b,c price
if ID = -1 we will stop code without code or price
if code is invalid print invalid and stop
if ID is valid price (float)
print number of products in each group, sum and mean product price 

do while and switch
we have run registration code at leat once
*/


#include <stdio.h>

int main()
{
    char code;
    int count = 0, id,a = 0, b = 0, c = 0,activate = 1;
    float price,sum = 0,mean;
    
    do {
        printf("ID: ");
        scanf("%d",&id);
        if (id == -1) {
            break;
        }
        printf("Code: ");
        scanf(" %c",&code);

        switch (code){
            case 'a': a++; break;
            case 'b': b++; break;
            case 'c': c++; break;
            default:
                printf("Invalid\n");
                activate = 0;
        }
        if (activate == 1)
        {
            printf("Price: ");
            scanf("%f",&price);
            sum += price;
            count++;
        }
        
    } while (activate == 1);

    mean = sum / count;

    printf("A: %d, B: %d, C: %d",a,b,c);

    printf("Sum: %.2f, mean: %.2f",sum,mean);

    return 0;
}