/*
if n is even next is n / 2
if n is odd next is 3n+1
*/

#include <stdio.h>

int main(void)
{
    int n, steps_taken = 0;
    printf("The sequence starting from: ");
    scanf("%d",&n);

    while (n>1)
    {
        printf("%d ",n);
        steps_taken++;
        if (n % 2 == 1) {
            n = 3*n + 1;
        }
        else {
            n = n/2;
        }
            
    }
    printf("%d",n);
    printf("\n");
    printf("Total steps taken: %d",steps_taken);
}