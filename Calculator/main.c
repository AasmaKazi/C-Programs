#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    double num1,num2;

    printf("Enter operator : ");
    scanf("%c",&op);

    printf("Enter two numbers : ");
    scanf("%lf%lf",&num1,&num2);

    switch(op){
    case '+':
        printf("%.1lf + %.1lf = %.1lf ",num1,num2,num1+num2);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf ",num1,num2,num1-num2);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf ",num1,num2,num1*num2);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf ",num1,num2,num1/num2);
        break;

    default:
        printf("Error ! oprator not correct");

    }


    return 0;
}
