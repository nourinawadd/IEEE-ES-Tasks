#include <stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], i, j;

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

    int diff[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            diff[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    printf("Difference between both matrices: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }
}
