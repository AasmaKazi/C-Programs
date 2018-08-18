#include <stdio.h>
#include <stdlib.h>

int main()
{
    char day;

    printf("Enter no. of day");
    scanf("%c",&day);


    switch(day){
case '1':

    printf("This is Monday");
    break;

case '2':

    printf("This is Tuesday");
    break;

case '3':

    printf("This is Wednesday");
    break;

case '4':

    printf("This is Thrusday");
    break;

case '5':

    printf("This is Friday");
    break;

case '6':

    printf("This is Saturday");
    break;

case '7':

    printf("This is Sunday");
    break;

default:
        printf("invalid case");

    }
    return 0;
}
