#include <stdlib.h>
#include <stdio.h>

void main(int argc, char **argv){
    FILE *fp;
    int ch;

    if (argc != 2){
        puts("Sintaxe errada\n");
        exit(1);
    }

    fp = fopen(argv[1], "r");

    if (fp==NULL){
        puts("Não consegui abrir o arquivo.\n");
        exit(2);
    }

    while( (ch = fgetc(fp) ) != EOF){
        putchar(ch);
    }

    fclose(fp);
}