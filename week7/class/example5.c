// print prime numbers up to n

#include <stdio.h>

int main()
{
    int N, i, num, flag;
    printf("Enter a positive number: ");
    scanf("%d",&N);

    printf("\n all prime numbers up to %d\n",N);
    printf("------------------\n");

    for (i = 2; i < N; i++) {
        flag = 1;
        num = 2;
        while (num<i && flag==1) {
            if ((i%num)==0)
                flag = 0; //means it is not prime
            num++;
        }
        if (flag==1)
            printf("%6d",i);
    }
    return 0;
}