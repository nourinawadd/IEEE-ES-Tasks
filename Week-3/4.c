#include <stdio.h>
int main(){
    int w, l;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter width: ");
    scanf("%d", &w);

    printf("Perimeter of rectangle = %d units", 2*w + 2*l);
}
