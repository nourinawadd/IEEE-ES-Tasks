#include <stdio.h>
int main(){
    float basic, gross, da, hra;

    printf("Input basic salary of an employee: ");
    scanf("%f", &basic);

    if(basic <= 10000)
    {
        da  = basic * 0.2;
        hra = basic * 0.8;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }

    gross = basic + da + hra;

    printf("Gross salary = %.2f", gross);
}
