#include <stdio.h>
int main(){
    int size, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements= %d", sum);
}
