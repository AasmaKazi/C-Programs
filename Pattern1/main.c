#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    printf("Enter number of rows:");
    scanf("%d",&row);

    for(int i=row;i>=1;--i)
{
    for(int space=0;space<row-i;++space)
    printf(" ");

    for(int j=i; j<=2*i-1;++j)
    printf("*");

    for(int j=0;j<i-1;++j)
    printf("*");

    printf("\n");

}

    return 0;
}
