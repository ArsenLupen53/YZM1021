/* Question 1
5 seats A
3 seats B
Uppercase group letter getchar
print each group seats before and after

if - else if - else 

A a-- first old then dec
B first dec print new --b

Any except A and B print Invalid

A 5 4 B 3 3

*/
#include <stdio.h>

int main(void)
{

    int a = 5;
    int b = 3;
    char group;

    printf("Group: ");
    group = getchar();


    if (group== 'A')
    {
        printf("A:%d ", a--); 
        printf("%d\n", a);
        printf("B:%d %d \n", b,b);
    }
    else if (group== 'B')
    {
        printf("A:%d %d\n",a,a);
        printf("B:%d ",b);
        printf("%d\n",--b);
    }
    else
        printf("Invalid entry");
    return 0;
}