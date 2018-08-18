#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , flag=0;
    printf("Enter the number: ");
    scanf("%d" , &num);

    for(int i=2;i<=num/2;++i){

        if(num%i == 0 )
            {

           flag=1;
           break;
        }

    }
    if(flag==0)
{


      printf("Number prime %d \n",num);
}
else{

    printf("number is not prime %d \n",num);
}
    return 0;
}
