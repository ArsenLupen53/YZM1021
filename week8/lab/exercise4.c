/* Question 4:
base=2 exponent=-1 -0.5
base=2 exponent=0 -> 1
base=2 exponent=1 -> 2
base=2 exponent=2 -> 4
base=2 exponent=3 -> 8
base=2 exponent=4 -> 16
base=2 exponent=5 -> 32
Loop
*/

#include <stdio.h>
double integer_power(int base, int exponent)
{
    int i;
    double factor = base;
    double result = 1;
    if (exponent < 0)
        exponent = -exponent;
        factor = 1.0 / base;
    for (i =0; i < exponent;i++) {
        result *= factor;
    }
    return result;
}

int main(void)
{
    int base, exponent;
    printf("Base exp: ");
    scanf("%d %d",&base, &exponent);
    if (base == 0 && exponent < 0) {
        printf("Invalid");
    }
    else {
        printf("R=%lf", integer_power(base,exponent));
    }
    return 0;
}