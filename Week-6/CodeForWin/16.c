#include <stdio.h>
#include <math.h>
int reverse(int num);
int palindromeCheck(int num);

int main(){
    int num, res;
    printf("Enter a number to check: ");
    scanf("%d", &num);
    res = palindromeCheck(num);
    if(res)
        printf("Yes, the number is a palindrome.");
    else
        printf("No, the number is not a palindrome.");
}
int reverse(int num){
    int digit = (int)log10(num);

    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));
}
int palindromeCheck(int num){
    if(num == reverse(num))
        return 1;

    return 0;
}
