#include <stdio.h>
int main(){
    int a, b, c;
    printf("Input first angle: ");
    scanf("%d", &a);
    printf("Input second angle: ");
    scanf("%d", &b);
    printf("Input third angle: ");
    scanf("%d", &c);

    if((a+b+c) == 180 && a>0 && b>0 && c>0)
        printf("The triangle is valid");
    else
        printf("The triangle is not valid");
}
