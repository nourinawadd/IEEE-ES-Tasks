#include <stdio.h>

int main(){
    int size, i, temp;
    printf("Enter size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter %d elements for the first array: ", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements for the second array: ", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr2[i]);
    }

    int *ptr1 = &arr1[0];
    int *ptr2 = &arr2[0];

    i=0;
    while(i < size){
        *ptr1 ^= *ptr2;
        *ptr2 ^= *ptr1;
        *ptr1 ^= *ptr2;
        ptr1++;
        ptr2++;
        i++;
    }

    printf("First array's updated elements: ");
    for(i=0; i<size; i++){
        printf("%d ", arr1[i]);
    }
    printf("\nSecond array's updated elements: ");
    for(i=0; i<size; i++){
        printf("%d ", arr2[i]);
    }
}
