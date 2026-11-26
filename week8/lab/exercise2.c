/* Question 2: A printer labels n sample tubes from 1 to n.
Write void print_labels(void). It must rean n. prints out 1 to n.
It prints at most 15 labels per line, and puts a newline after.
After the last line, always print a newline

Important: Do not print the newline twice
*/

#include <stdio.h>
void print_labels(void);

int main(void)
{
    print_labels();
    return 0;
}


void print_labels(void)
{
    int n, i;
    printf("N: ");
    scanf("%d",&n);

    for (i = 1; i <= n;i++)
    {
        printf("%d ",i);
        
        if (i%15==0 || i == n)
            printf("\n");
    }

}