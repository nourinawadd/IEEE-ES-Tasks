#include <stdio.h>
int main(){
    int n;
    int lastDigit = 0;
    int i = 0;
    int digits = 0;
    printf("Input number: ");
    scanf("%d", &n);

    while(n > 0){
        n /= 10;
        digits ++;
    }

    int arr[digits];

    while(n > 0){
        lastDigit = n % 10;
        arr[i] = lastDigit;
        n /= 10;
        i++;
    }

    printf("Reverse of 12345 = ");
    for(int j=0; j<digits; j++){
        printf("%d", arr[0]);
    }
}
