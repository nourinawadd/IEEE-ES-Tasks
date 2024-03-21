#include <stdio.h>
#include <math.h>
int main(){
    int num, n, newNum;

    printf("Input number: ");
    scanf("%d", &num);
    printf("Input nth bit to set: ");
    scanf("%d", &n);

    newNum = (1 << n) | num;

    printf("Number after setting nth bit: %d in decimal.", newNum);
}
