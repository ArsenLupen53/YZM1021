#include <stdio.h>

int main()
{
    int x = 234, y = 0352, z = 0xEA;
    printf("%d\t%o\t%x\n",x, x, x);
    printf("%d\t%d\t%d\n", x, y, z);

    return 0;
}