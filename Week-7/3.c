#include <stdio.h>
int main(){
    int num, n, bit;
    printf("Input number: ");
    scanf("%d", &num);
    printf("Input nth bit number: ");
    scanf("%d", &n);

    bit = num >> n;
    if(bit & 1)
        printf("%d bit of %d is set (1).", n, num);
    else
        printf("%d bit of %d is not set (0).", n, num);

}
