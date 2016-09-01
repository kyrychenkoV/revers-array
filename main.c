#include <stdio.h>
#include <time.h>

int main()
{
    randomArray();
    return 0;
}

void reversArray(int a[],int size){
    int i=0;
    int c=0;
    printf("\nArray after:");
    for ( i = 0; i < size/2; i ++ ){
        c = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = c;
    }
    for ( i = 0; i <size; i++)
        printf("%d ",a[i]);
}
void randomArray(){
    srand((unsigned) time(NULL));
    const int N=4;
    int array[N];
    int i=0;
    printf("Array befor:");
    for (i=0;i<N;i++){
        array[i]=rand () %30;
        printf("%d ",array[i]);
    }
    reversArray(array,N);
}
