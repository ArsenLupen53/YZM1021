/*
    Initialize 4 variables
    char
    signed int
    unsigned int
    double
*/
#include <stdio.h>
int main(void)
{
    char ch = 'a';
    signed int s_int = -200;
    unsigned int us_int = 200;
    double doub= 14.12;

    printf("%c\t%d\t%u\t%f\n", ch, s_int, us_int, doub); // unsigned tanımlanmasına dikkat edelim.
    // printf("%c\t%u\t%u\t%f", ch, s_int, us_int, doub); s_int i yazdırırken %d yerine %u kullanırsak çöp değer atıyor.

    printf("int: %d \n", (int)sizeof(int));
    printf("char %d \n", (int)sizeof(char));
    return 0;
}