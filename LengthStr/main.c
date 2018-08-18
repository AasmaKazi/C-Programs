#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000],i;
    printf("Enter the string:");
    scanf("%s",&str);

    for(i=1;str[i] != '\0';++i)

        printf("Length of string is: %d", i);

    return 0;
}
