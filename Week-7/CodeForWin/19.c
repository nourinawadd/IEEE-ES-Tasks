#include <stdio.h>
int main(){
    int size, i, j, temp;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array elements in ascending order: ");
    for(i=0; i<size; i++)
        printf("%d ", arr[i]);
}
