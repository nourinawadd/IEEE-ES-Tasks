#include <stdio.h>

int main(){
    int size, n, i=0, flag=0;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the array's elements: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search for: ");
    scanf("%d", &n);

    int *ptr = &arr[0];

    i = 0;
    while(i < size){
        if(*ptr == n){
            printf("%d exists at index %d.", n, i);
            flag = 1;
            break;
        }
        else{
            ptr++;
            i++;
        }
    }

    if(flag == 0)
        printf("%d doesn't exist in the array.", n);
}
