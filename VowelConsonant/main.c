#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int isLowerCase,isUpperCase;

    printf("Enter character:\n");
    scanf("%c",&ch);

    isLowerCase=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    isUpperCase=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');

    if(isLowerCase || isUpperCase)
    {
        printf("vowel %c",ch);
    }
    else
    {
        printf("char is not vowel %c",ch);
    }


    return 0;
}
