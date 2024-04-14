#include <stdio.h>
int main(){
    int size, max1 = 0, max2 = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];

    }

    printf("Second largest = %d", max2);


}
