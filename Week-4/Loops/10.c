#include <stdio.h>
int main(){
    int n;
    int digits = 0;
    printf("Input num: ");
    scanf("%d", &n);

    while(n > 0){
        n /= 10;
        digits ++;
    }
    printf("Number of digits: %d", digits);
}
