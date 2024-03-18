#include <stdio.h>
#include <math.h>
int factorial(int num);

int main(){
    int num, ans;

    printf("Enter number: ");
    scanf("%d", &num);

    ans = factorial(num);
    printf("Factorial of %d = %d.", num, ans);
}
int factorial(int num){
    if(num == 1)
        return 1;
    else
        return num*factorial(num-1);
}
