#include <stdio.h>
int main(){
    int size1, size2, i, j = 0, k = 0;
    printf("Enter size of first array: ");
    scanf("%d", &size1);

    int arr1[size1];
    printf("Input first array elements: ");
    for(int i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr2[size2];
    printf("Input second array elements: ");
    for(int i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    int merge[size1 + size2];

    for(i=0; i<(size1 + size2); i++){
            if(j >= size1 || k >= size2)
            {
                break;
            }
            if(arr1[j] < arr2[k]){
                merge[i] = arr1[j];
                j++;
            }
            else{
                merge[i] = arr2[k];
                k++;
            }
    }
    while(j < size1)
    {
        merge[i] = arr1[j];
        i++;
        j++;
    }
    while(k < size2)
    {
        merge[i] = arr2[k];
        i++;
        k++;
    }

    printf("Array merged in ascending order: ");
    for(i=0; i<(size1 + size2); i++)
    {
        printf("%d ", merge[i]);
    }


}
