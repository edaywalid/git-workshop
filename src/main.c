#include <stdio.h>
#include "calculator.h"


int main()
{
    int x , y ;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Sum of %d and %d is %d\n", x, y, add(x, y));
    printf("Difference of %d and %d is %d\n", x, y, subtract(x, y));
    printf("Product of %d and %d is %d\n", x, y, multiply(x, y));
    printf("Quotient of %d and %d is %d\n", x, y, divide(x, y));
    return 0;
}