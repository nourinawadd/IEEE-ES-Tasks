#include <stdio.h>
int main(){
    int size, ele, pos;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size+1];
    printf("Input array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Input element to insert: ");
    scanf("%d", &ele);
    printf("Input position where to insert: ");
    scanf("%d", &pos);

    for(int i=size; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    arr[pos-1] = ele;

    printf("Elements of array are: ");
    for(int i=0; i<size+1; i++){
        printf("%d ", arr[i]);
    }
}
