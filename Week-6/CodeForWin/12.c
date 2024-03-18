#include <stdio.h>

void evenNumbers(int lower, int upper);
void oddNumbers(int lower, int upper);

int main()
{
    int lower, upper;
    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Even numbers from %d to %d: ", lower, upper);
    evenNumbers(lower, upper);
    printf("\nOdd numbers from %d to %d: ", lower, upper);
    oddNumbers(lower, upper);

    return 0;
}
void evenNumbers(int lower, int upper){
    if(lower % 2 == 0){
        if(lower > upper)
            return;
        printf("%d ", lower);
    }
    evenNumbers(lower + 1, upper);
}
void oddNumbers(int lower, int upper){
    if(lower % 2 != 0){
        if(lower > upper)
            return;
        printf("%d ", lower);
    }
    oddNumbers(lower + 1, upper);
}
