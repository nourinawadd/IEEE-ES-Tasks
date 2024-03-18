#include <stdio.h>
#include <math.h>

int maxi(int x, int y);
int mini(int x, int y);

int main(){
    int a, b, max, min;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = maxi(a,b);
    min = mini(a,b);
    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);
}

int maxi(int x, int y){
    if(x > y)
        return x;
    else
        return y;
}

int mini(int x, int y){
    if(x > y)
        return y;
    else
        return x;
}
