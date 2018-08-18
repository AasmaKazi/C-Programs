#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    double sum=0,num[100];
    printf("Enter the no. of elements in array:");
    scanf("%d",&n);

    for(i=0; i < n ; ++i)
    {

        printf("Enter the elements:",i+1);
        scanf("%ld",&num[i]);
        sum =sum + num[i];

    }

    printf("Sum is: %ld",sum);
    return 0;
}
