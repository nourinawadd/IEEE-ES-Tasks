#include <stdio.h>
int main(){
    int arr[2][2], i, j, det;

    printf("Input elements in 2x2 matrix: ");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    det = ((arr[0][0] * arr[1][1]) - (arr[0][1] * arr[1][0]));
    printf("Determinant of matrix = %d.", det);
}
