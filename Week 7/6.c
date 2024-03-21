#include <stdio.h>
#include <math.h>
int main(){
    int num, n, newNum;

    printf("Input number: ");
    scanf("%d", &num);
    printf("Input nth bit to clear: ");
    scanf("%d", &n);

    newNum = (1 << n) ^ num;

    printf("After toggling nth bit: %d (in decimal).", newNum);
}
