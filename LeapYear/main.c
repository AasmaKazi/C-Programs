#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter year:\n");
    scanf("%d",&year);

    if(year%4 == 0){

        if(year%100 == 0){
            if(year%400 ==0){

                printf("Year is Leap year:",year);
            }

            else{
                    printf("Not  Leap year:",year);

            }
        }
            else{
                printf("Year is Leap year:",year);
            }
    }
            else{
                printf("Not Leap year:",year);
            }

    return 0;
}
