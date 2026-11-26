/* Question 7:
Split bill equally
Each person pays whole number of lira Rounde UP
bill -> float, people -> int 

share(double bill, int people); Use ceil form math.h return rounded share as an int
print Each and Tip
Tip = each * people - bill
*/

#include <stdio.h>
#include <math.h>
int share(double bill, int people);

int main(void)
{
    int people,each;
    double bill;
    printf("Bill people: ");
    scanf("%lf %d",&bill,&people);
    each = share(bill,people);

    printf("Each: %d Extra: %.2lf",each, each*people - bill);

    return 0;
}

int share(double bill, int people)
{
    return ceil(bill / people);
}