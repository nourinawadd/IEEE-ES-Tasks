#include <stdio.h>
#include <math.h>
int main(){
    int num, size, bit;
    printf("Input any number: ");
    scanf("%d", &num);

    size = sizeof(int)*8;
    int arr[size];

    for(int i=0; i<size; i++){
        bit = (num >> i) & 1;
        arr[i] = bit;
    }

    printf("Binary number = ");

    for(int i= (size-1); i>=0; i--){
        printf("%d", arr[i]);
    }
}
