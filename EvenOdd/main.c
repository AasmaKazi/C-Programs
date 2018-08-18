#include <stdio.h>
#include <stdlib.h>
//Program to Check Even or Odd
int main()
{
    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);

    if(number%2 == 0)
        printf("number is even..",number);
    else
        printf("number is odd..",number);
    return 0;
}
