#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter the integer no:");
    scanf("%d",&number);

    printf("Factors of %d the number:",number);
    for(int i=1;i <= number;++i){

        if(number % i ==0){

            printf("%d",i);
        }
    }
    return 0;
}
