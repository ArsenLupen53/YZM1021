/* Question 10:
greatest common divider

18, 12 -> 6
27, 30 -> 3

Least common multiple
18,12 -> 36
27,30 -> 270
recursive
*/

#include <stdio.h>

int gcd(int a, int b);
int mult(int a, int b);

int main(void)
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d %d",&a, &b);

    int g = gcd(a, b);
    int l = mult(a/g, b);

    printf("GCD: %d MULT: %d",g,l);
    return 0;
}

// 18, 12, 6, 0
int gcd(int a, int b)
{
    if (b==0) return a;

    return gcd(b, a%b);
}


// 18 = 2 * 3 * 3
// 12= 2 * 2 * 3
// 36
int mult(int a, int b)
{
    if (b == 0) return 0;

    return a + mult(a,b-1);
}