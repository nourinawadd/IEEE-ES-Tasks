#include <stdio.h>

int main(){
    char str1[10000], str2[10000];
    int i, len=0;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    char *ptr1 = &str1[0];
    char *ptr2 = &str2[0];

    while(*ptr1 != '\0'){
        ptr1++;
    }

    while(*ptr2 != '\0'){
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    printf("Concatenated string = %s.", str1);
}
