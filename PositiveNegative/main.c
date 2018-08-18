#include <stdio.h>
#include <stdlib.h>

int main()
{   int number;

    printf("Enter the no:\n");
    scanf("%d",&number);

    if(number>=0){

        printf("Given no. is positive:");
    }
    else{

        printf("Given no. is negative:");
    }
    return 0;
}
