#include <stdio.h>
#include <stdlib.h>

void main(void){
    FILE *fp;
    int i, v[10], n;

    
    if ((fp = fopen("dados.dat", "rb")) == NULL){
        puts("Não consegui abrir o arquivo");
        exit(1);
    }

    n = fread(v, sizeof(int), 10, fp);
    if (n != 10){
        fprintf(stderr, "Não li todos os elementos");
    }

    for (i = 0; i < n; i++){
        printf("%d : %d\n", i+1, v[i]);
    }

   

    fclose(fp);
}