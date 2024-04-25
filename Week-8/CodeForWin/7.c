#include <stdio.h>

int main(){
    int size, i=0, j=0;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];
    printf("Enter the array's elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }

    int *ptr = &arr1[size-1];

    i = size, j = 0;
    while(i>=0){
        arr2[j] = *ptr;
        ptr--;
        i--;
        j++;
    }

    printf("Reversed array: ");
    for(i=0; i<size; i++){
        printf("%d ", arr2[i]);
    }
}
