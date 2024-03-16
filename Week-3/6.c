#include <stdio.h>
int main(){
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    float dia = 2*r;
    float circ = 2*3.14*r;
    float area = 3.14*r*r;

    printf("Diameter = %.2f units\n", dia);
    printf("Circumference = %.2f units\n", circ);
    printf("Area = %.2f sq. units\n", area);
}
