#include <stdio.h>
int main(){
    int size, max1 = 0, max2 = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    printf("Input array1 elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    printf("Array 1: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr2[i]);
    }
}
