#include <stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], i, j, flag;

    printf("Input elements in 3x3 matrix 1: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Input elements in 3x3 matrix 2: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr2[i][j]);
        }
    }


    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(arr1[i][j] == arr2[i][j])
                flag = 0;
            else
                flag = 1;
        }
    }

    if(flag == 0)
        printf("Both matrices are equal.");
    else
        printf("Matrices are not equal.");
}
