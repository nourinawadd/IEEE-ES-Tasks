#include <stdio.h>
int main(){
    float cm, m, km;
    printf("Enter length in centimeter= ");
    scanf("%f", &cm);

    m = cm/100;
    km = cm/100000;

    printf("Length in meter = %.2f m\n", m);
    printf("Length in kilometer = %.2f km",km);
}
