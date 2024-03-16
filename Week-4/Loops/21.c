#include <stdio.h>
int main(){
    int base, exp;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    int ans = 1;
    for(int i=0; i<exp; i++){
        ans *= base;
    }
    printf("%d ^ %d = %d", base, exp, ans);
}
