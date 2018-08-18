#include <stdio.h>
#include <stdlib.h>

/*Multiplication of two floating point*/

int main()
{
    double num1,num2,result;
    printf("Enter two number for multiplication:");

    scanf("%lf%lf", &num1, &num2);
    result=num1*num2;

    printf("Multiplication of number is:%2lf\n",result);
    return 0;
}
