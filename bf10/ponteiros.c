#include <stdio.h>

void main(void){
    char ch = 'b', *ptr;
    

    ptr = &ch;
    printf("%c - ch\n", ch);
    printf("%d - prt\n", ptr);
    printf("%c - *ptr\n", *ptr);
    printf("%d - &ptr\n", &ptr);
}