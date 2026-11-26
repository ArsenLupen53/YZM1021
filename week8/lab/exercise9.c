/* Quesiton 9:

list : 0,1,1,2,3,5,8,13
*/

#include <stdio.h>
// 0, 1, 1, 2 ,3 ,5, 8, 13, 21, 34

int fibonacci(int n);

int main(void)
{
    int n;
    printf("Value:");
    scanf("%d",&n);


    printf("%d\n",fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if (n==1)
        return 0;
    if (n==2)
        return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);
}