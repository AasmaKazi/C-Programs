#include <stdio.h>
#include <stdlib.h>
//table

int main()
{
    int n;

    printf("Enter the no. for table:");
    scanf("%d",&n);

    for(int i=1;i<=10;++i){

        printf("%d * %d = %d \n",n,i,n*i);
    }
    return 0;
}
