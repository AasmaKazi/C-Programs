#include<stdio.h>

int main()
{
    char ch;

    printf("enter the character");
    scanf("%c",&ch);

    (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    ? printf("it is alphabet.\n")
    :printf("it is not alphabet.\n");

    return 0;
}
