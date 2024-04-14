#include <stdio.h>
int main(){
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Array elements after reverse: ");
    for(int i=size; i>0; i--){
        printf("%d ", arr[i-1]);
    }
}
