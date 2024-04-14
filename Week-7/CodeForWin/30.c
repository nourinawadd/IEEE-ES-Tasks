#include <stdio.h>
int main(){
    int arr[3][3], i, j, row, col;

    printf("Input elements in 3x3 matrix: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3; i++){
        row = 0, col = 0;
        for(j=0; j<3; j++){
            row += arr[i][j];
            col += arr[j][i];
        }
        printf("\nSum of row %d: %d", i+1, row);
        printf("\nSum of col %d: %d", i+1, col);
    }

}
