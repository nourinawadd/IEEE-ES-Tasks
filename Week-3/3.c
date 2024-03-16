#include <stdio.h>
int main(){
    int a, b;
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);

    printf("Sum = %d\n", a+b);
    printf("Difference = %d\n", a-b);
    printf("Product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);
    printf("Modulus = %d\n", a%b);
}
