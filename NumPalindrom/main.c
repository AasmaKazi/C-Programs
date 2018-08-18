#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,reverseNum=0,originalNum,remainder;

    printf("Enter the number");
    scanf("%d",&n);

    originalNum=n;

    while(n !=0){

        remainder= n% 10;
        reverseNum=reverseNum*10 +remainder;
        n=n/10;

    }

    if(originalNum==reverseNum){

        printf("Palindrom: %d",originalNum);
    }
    else{

        printf("Not Palindrom %d",originalNum);
    }
    return 0;
}
