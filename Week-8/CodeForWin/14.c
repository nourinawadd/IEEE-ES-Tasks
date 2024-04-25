#include <stdio.h>

int main(){
    char str[10000];
    int len=0;
    printf("Enter string: ");
    gets(str);

    char *ptr = &str[0];

    while(*ptr != '\0'){
        ptr++;
        len++;
    }

    printf("Length of string = %d", len);
}
