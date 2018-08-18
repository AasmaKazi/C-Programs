#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,resverNum=0,remainder;

    printf("enter the number:");
    scanf("%d",&n);

    while(n != 0)
        {
            remainder=n %10;
            resverNum=resverNum *10 + remainder;

            n=n/10;

        }

        printf("Revers number is : %d",resverNum);


    return 0;
}
