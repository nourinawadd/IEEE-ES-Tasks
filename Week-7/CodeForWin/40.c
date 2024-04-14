#include <stdio.h>
int main(){
    int arr[3][3], i, j, check;

    printf("Input elements in 3x3 matrix: ");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int transpose[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            transpose[i][j] = arr[j][i];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(transpose[i][j] == arr[i][j])
                check = 1;
            else
            {
                check = 0;
                break;
            }
        }
    }

    if(check == 1)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is asymmetric.");
}
