#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividend,divisor,remainder,quotient;

    printf("Enter dividend and divisor");
    scanf("%d%d",&dividend,&divisor);

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    printf("Quotient: %d\n",quotient);
    printf("Remainder is: %d",remainder);
    return 0;
}
