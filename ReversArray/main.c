#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,array[10],temp;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    printf("Enter the elements in array: ");

    for(int i=0;i<size;++i){
            scanf("%d",&array[i]);
    }
int end = size-1;


for(int j=0;j<size/2;++j){
    temp = array[j];
    array[j]=array[end];
    array[end]=temp;

    end--;

}

printf("revers array: ");

for(int j=0;j<size;j++){

    printf("%d ",array[j]);
}
    return 0;
}
