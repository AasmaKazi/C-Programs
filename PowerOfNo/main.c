#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,exponent;
    long long result=1;

    printf("Enter base:");
    scanf("%d",&base);

    printf("Enter exponent:");
    scanf("%d",&exponent);

    while(exponent != 0){

        result = result* base;
        --exponent;
    }

    printf("answer = %lld",result);
    return 0;
}
