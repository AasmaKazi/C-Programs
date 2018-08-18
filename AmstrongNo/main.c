#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,originalNo,remainder,result=0;

    printf("Enter three digit number:");
    scanf("%d",&number);

    originalNo= number;

    while(originalNo != 0 ){

        remainder = originalNo%10;
        result += remainder*remainder*remainder;
        originalNo /= 10;

    }

    if(result==number){

        printf("%d number is amstrong ",number);
    }
    else{

        printf("%d number is not amstrong",number);
    }

    return 0;
}
