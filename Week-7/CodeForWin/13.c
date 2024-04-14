#include <stdio.h>
int main(){
    int size, i, j, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    int arr[size];
    printf("Input array elements: ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements = %d", count);
}
