#include <stdio.h>
int main(){
    int n;
    printf("Input upper limit: ");
    scanf("%d", &n);

    printf("Odd numbers between 1 to %d: \n", n);
    for(int i=1; i<=n; i+=2){
        printf("%d ", i);
    }
}
