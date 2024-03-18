#include <stdio.h>

int cube(int num);

int main(){
    int num, ans;

    printf("Enter a number: ");
    scanf("%d", &num);

    ans = cube(num);

    printf("Cube of %d = %d", num ,ans);
}

int cube(int num){
    return (num*num*num);
}
