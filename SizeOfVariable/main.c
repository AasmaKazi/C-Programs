#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerType;
    float floatType;
    char charType;
    double doubleType;
    // comment can be give using this also
    printf("Size of Integer %ld bytes\n",sizeof(integerType));
    printf("Size of float %ld bytes\n",sizeof(floatType));
    printf("Size of char %ld bytes\n",sizeof(charType));
    printf("Size of double %ld bytes\n",sizeof(doubleType));
    return 0;
}
