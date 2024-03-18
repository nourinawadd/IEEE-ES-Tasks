#include <stdio.h>
#include <math.h>

void isPrime(int lower, int upper);

int main(){
    int lower, upper;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    isPrime(lower, upper);
}

void isPrime(int lower, int upper){
    int flag = 1;
    printf("Prime numbers between %d - %d are: ", lower, upper);
    while(lower <= upper){
        for(int i=2; i<=lower/2; i++){
            if(lower % i == 0){
                flag = 0;
            }
        }
        if(flag){
            printf("%d ", lower);
        }

        lower++;
    }
}
