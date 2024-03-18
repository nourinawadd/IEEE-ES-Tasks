#include <stdio.h>
#include <math.h>
int sumOfDigits(int num);

int main(){
    int num, ans;

    printf("Enter number: ");
    scanf("%d", &num);

    ans = sumOfDigits(num);
    printf("Sum of the digits = %d.", ans);
}
int sumOfDigits(int num){
    if(num == 0)
        return 0;

    return ((num % 10) + sumOfDigits(num / 10));
}
