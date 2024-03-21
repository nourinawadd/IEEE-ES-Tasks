#include <stdio.h>
#include <math.h>
int main(){
    int num;
    int one = 0;
    int zero = 0;
    int bit = 0;
    int size = sizeof(int) * 8;

    printf("Input any number: ");
    scanf("%d", &num);

    for(int i=0; i<size; i++){
        bit = (num >> i) & 1;
        if(bit == 1)
            one++;
        else
            zero++;
    }
    printf("Output number of ones = %d\n", one);
    printf("Output number of zeros = %d\n", zero);
}
