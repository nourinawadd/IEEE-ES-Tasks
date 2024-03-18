#include <stdio.h>
#include <math.h>
int main(){
    float num1, num2;
    char op;
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op){
    case '+':
        printf("%.2f", num1 + num2);
        break;
    case '-':
        printf("%.2f", num1 - num2);
        break;
    case '*':
        printf("%.2f", num1 * num2);
        break;
    case '/':
        if(num2 == 0)
            printf("Cannot divide by zero.");
        else
            printf("%.2f", num1 / num2);
        break;
    default:
        printf("Invalid operator");
    }
}
