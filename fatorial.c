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
    puts("Só digitar o numero que voce quer o fatorial\n");
    while(scanf("%d", &k)){
        printf("%d! = %u\n", k, fat(k));
    }
}