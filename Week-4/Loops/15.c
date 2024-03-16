#include <stdio.h>
int main(){
    int n, lastDigit;
    printf("Input number: ");
    scanf("%d", &n);
    int prod = 1;

    while(n > 0){
        lastDigit = n % 10;
        prod *= lastDigit;
        n /= 10;
    }
    printf("Product of digits: %d", prod);
}
