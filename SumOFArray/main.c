#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[]={2,3,1,5,7};
      int sum=0;

    for(int i=0;i<5;++i){

         sum = sum + array[i];

    }

    printf("Sum of array is: %d",sum);
    return 0;
}
