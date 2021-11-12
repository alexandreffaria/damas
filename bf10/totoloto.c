#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUMS 49
#define MIN_APOSTA 6
#define NUM_LINHAS 7

void start_random(void){
    long ultime;
    time(&ultime);
    srand((unsigned) ultime);
}

void inicia(int v[]){
    for(int i = 0; i < NUMS; i++){
        v[i]=0;
    }
}

int ler_apostas(void){
    int n;
    
    do{
        printf("Quantos numeros voce quer apostar?\n");
        scanf("%d", &n);
    }
    while ((n < MIN_APOSTA || n > NUMS) && n != 0);
    
    return n;
}

void gerar_numeros(int *v, int n){
    int i, indice;
    for (i = 1; i <= n; i++){
        indice = rand() % NUMS;
        
        if(v[indice] == 0){
            v[indice] = 1;
        }
        else{
            i--;
        }
    }
}

void apresentar(int res[]){
    for (int i = 0; i < NUMS; i++){
        if (res[i] == 0){
            printf(" %2d", i+1);
        }
        else{
            printf(" XX");
        }

        if((i+1 % NUM_LINHAS == 0)) putchar('\n');
    }

    putchar('\n');
}



void main(void){
    int vetor[NUMS];
    int n_nums;

    start_random();

    while (1)
    {
        inicia(vetor);
        if((n_nums = ler_apostas()) == 0 ){
            break;
        }

        gerar_numeros(vetor, n_nums);
        apresentar(vetor);
    }
    
}