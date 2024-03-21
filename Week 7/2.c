#include <stdio.h>
int main(){
    int num, bits, msb;
    bits = sizeof(int) * 8;

    printf("Input number: ");
    scanf("%d", &num);

    msb = 1 << (bits - 1);

    if(msb & num)
        printf("MSB of %d is set (1).", num);
    else
        printf("MSB of %d is not set (0).", num);
}
