#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1,num2,temp;
    printf("Enter first num:");
    scanf("%lf",&num1);

    printf("Enter second num:");
    scanf("%lf",&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("First num= %2lf",num1);
    printf("Second num= %2lf",num2);
    return 0;
}
