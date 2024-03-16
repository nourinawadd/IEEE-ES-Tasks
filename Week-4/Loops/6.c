#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Input upper limit: ");
    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        sum += i;
    }
    printf("Sum of natural numbers from 1-%d: %d\n", n, sum);
}
