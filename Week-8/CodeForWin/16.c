#include <stdio.h>

int main(){
    char str1[10000], str2[10000];
    int len=0;
    printf("Enter string to reverse: ");
    gets(str1);

    char *ptr1 = &str1[0];
    char *ptr2 = &str2[0];

    while(*ptr1 != '\0'){
        ptr1++;
        len++;
    }

    ptr1--;

    while(len>=0){
        *ptr2 = *ptr1;
        ptr1--;
        ptr2++;
        len--;
    }

    *ptr2 = '\0';

    printf("Reversed string = %s.", str2);
}
