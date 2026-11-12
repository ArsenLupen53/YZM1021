/*
sensor record n integer changes
read n 1 - 10
read n values - 1000 to 1000

for loop to count positive negative zero
if ,else if ,else
print p n z
*/


#include <stdio.h>

int main()
{
    int num,p = 0,n = 0,z = 0,value;

    printf("n: ");
    scanf("%d",&num);

    for (int i = 0; i<num; i++) {
        printf("Value: ");
        scanf("%d",&value);

        if (value > 0)
            p++;
        else if (value < 0)
            n++;
        else
            z++;
    }

    printf("P: %d , N: %d, Z: %d\n",p,n,z);

    return 0;
}