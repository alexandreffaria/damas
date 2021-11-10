#include <stdio.h>

int strlen(char *s){
    int n = 0;
    while(s[n] != '\0'){
        n++;
    }
    return n;
}


void main(void){
    int a = strlen("");
    int b = strlen("test");
    printf("%d",a);
    printf("%d",b);

}