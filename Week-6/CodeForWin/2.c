#include <stdio.h>
#include <math.h>

float diameter(float radius);
float circumference(float radius);
float areaa(float radius);

int main(){
    float rad, dia, circ, area;

    printf("Input radius: ");
    scanf("%f", &rad);

    dia = diameter(rad);
    circ = circumference(rad);
    area = areaa(rad);

    printf("Diameter = %.2f units\n", dia);
    printf("Circumference = %.2f units\n", circ);
    printf("Area = %.2f sq. units", area);
}

float diameter(float radius){
    return (2*radius);
}

float circumference(float radius){
    return (2*3.14*radius);
}

float areaa(float radius){
    return (radius*radius*3.14);
}
