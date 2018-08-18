#include <stdio.h>
#include <stdlib.h>
//find gcd
//print a-z alphabates
void display(){
char c;

for(c='a';c<='z';++c){
    printf("%c" ,c);

}
}

int main()
{

      display() ;
      printf("\n");
    int n1,n2,i,gcd;

    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);

    for(i=1;i<=n1&&i<=n2;++i){

        if(n1%i == 0 && n2%i == 0){
            gcd = i ;
        }

    }

    printf("GCD for given number %d and %d is %d",n1,n2,gcd);


    return 0;

}
