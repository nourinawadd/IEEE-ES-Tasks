#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c;
    float root1, root2, imag;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    int disc = (b*b) - 4*a*c;

    switch(disc>0){
    case 1:
        root1 = (-b + sqrt(disc)) / (2*a);
        root2 = (-b - sqrt(disc)) / (2*a);
        printf("The distinct roots are= %.2f and %.2f", root1, root2);
        break;
    case 0:
        switch(disc == 0){
        case 1:
            root1 = root2 = (-b) / 2*a;
            printf("Two equal and real roots are= %.2f and %.2f", root1, root2);
            break;
        case 0:
            root1 = root2 = -b / (2 * a);
            imag = sqrt(-disc) / (2 * a);
            printf("Two distinct complex roots are= %.2f + i%.2f and %.2f - i%.2f", root1, imag, root2, imag);
            break;
        }
    }
}
