#include <stdio.h>
int main(){
    int num;
    printf("Enter month number: ");
    scanf("%d", &num);

    if(num==1 || num==3 || num==5 || num==7 || num==8 || num==10 || num==12)
        printf("It contains 31 days.");
    else if(num==4 || num==6 || num==9 || num==11)
        printf("It contains 30 days.");
    else if(num==2)
        printf("It contains 28/29 days.");
}
