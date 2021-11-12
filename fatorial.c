#include <stdio.h>


unsigned fat (int n){
    if (n==0){
        return 1;
    }
    else{
        return n * fat(n-1);
    }
}

void main(void){
    int k;
    while(scanf("%d", &k)){
        printf("%d! = %u\n", k, fat(k));
    }
}