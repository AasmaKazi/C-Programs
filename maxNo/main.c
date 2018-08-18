#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1,num2,num3;

    printf("Enter num1,num2,num3:\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>=num2 && num1>=num3){

        printf("num1 is Max no:",num1);
    }
    if(num2>=num1 && num2>=num3){
            printf("num2 is Max no:",num2);
    }
    if(num3>=num1 && num3>=num2){
            printf("num3 is Max no:",num3);
    }
    return 0;
}
