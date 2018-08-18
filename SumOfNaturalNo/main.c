#include <stdio.h>
#include <stdlib.h>
//sum of all nautral no
int main()
{
    int n,sum=0;

    printf("Enter Positive no:");
    scanf("%d",&n);

    for(int i=0;i<=n;++i){
        sum=sum+i;

    }
    printf("Sum of all natural number %d",sum);
    return 0;
}
