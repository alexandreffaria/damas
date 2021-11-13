#include <stdio.h>
#include <stdlib.h>

void main(void){
    FILE *fp;
    int i, v[10];

    for(i = 0; i < 10; i++){
        printf("Introduza o numero: %d", i+1);
        scanf("%d", &v[i]);
    }

    if ((fp = fopen("dados.dat", "wb")) == NULL){
        puts("Não consegui criar o arquivo");
        exit(1);
    }

    if(fwrite(v, sizeof(int), 10, fp) != 10){
        fprintf(stderr, "Não foram escritos todos os elementos\n");
    }

    fclose(fp);
}