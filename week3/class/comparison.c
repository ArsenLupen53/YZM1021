// Comparison of int and float var types

#include <stdio.h>
int main()
{
    int int_num1, int_num2, int_num3;
    float float_num1, float_num2, float_num3;

    int_num1 = 32 / 10;
    float_num1 = 32 / 10;
    int_num2 = 32.0 / 10;
    float_num2 = 32.0 / 10;
    int_num3 = 32 / 10.0;
    float_num3 = 32 / 10.0;

    printf("The integer divison for the first %d\n", int_num1); // prints 3 because it does not have a value after dot. It is just int.
    printf("The float divison for the first %f\n", float_num1); // prints 3 because it does not have value after dot. It is just int.
    printf("The integer divison for the second %d\n", int_num2); // prints 3 because it just can read the int not the values after dot.
    printf("The float divison for the second %f\n", float_num2); // prints 3.2 because it can read the whole number. The divison is float normally.
    printf("The integer divison for the third %d\n", int_num3); // prints 3 because it can not read the whole number just the int.
    printf("The float divison for the third %f\n", float_num3); // prints 3.2 because it can read the whole number.
    
    return 0;
}