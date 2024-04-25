#include <stdio.h>

int main(){
    int size, i=0;
    printf("Enter first array's size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];

    printf("Enter the first array's elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }

    int *ptr = &arr1[0];
    i=0;
    while(i < size){
        arr2[i] = *ptr;
        ptr++;
        i++;
    }

    printf("First array's elements: ");
    for(i=0; i<size; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array's elements: ");
    for(i=0; i<size; i++){
        printf("%d ", arr2[i]);
    }
}
