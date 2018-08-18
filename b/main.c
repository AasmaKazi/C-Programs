#include <stdio.h>
#include <stdlib.h>

int main()
{

char ch;
int isLowerCase,isUpperCase;
printf("enter an alphabet:");
scanf("%c",&ch);
isLowerCase=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');


if(isLowerCase||isUpperCase){
    printf("%c is vowels");
}else{

printf("%c is consonant");
}
    return(0);

}
