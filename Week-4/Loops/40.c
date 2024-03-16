#include <stdio.h>
#include <math.h>

int main(){
    int n, lastDigit;
    int ans = 0;
    int i=0;

    printf("Input number: ");
    scanf("%d", &n);

    while(n > 0){
        lastDigit = n % 10;
        ans += lastDigit * pow(2, i);
        n /= 10;
        i++;
    }
    printf("Decimal = %d", ans);
}
