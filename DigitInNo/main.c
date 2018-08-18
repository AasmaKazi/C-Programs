#include <stdio.h>
#include <stdlib.h>
//digits in number
int main()
{
    long long num;
    int count=0;

    printf("Enter the number:");
    scanf("%lld",&num);

    while(num != 0 )
        {

        num /= 10 ;//n = n/10
        count++;
    }

    printf("digits are: %d", count);
    return 0;
}
