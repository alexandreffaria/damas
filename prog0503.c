#include <stdio.h>

void linha(int, char);

int isequal(int x, int y){
    return (x == y);
}


void main(){
    linha(20,'-');
    printf("Numeros entre 1 e 5\n");
    linha(20, '*');
    for(int i = 0; i < 5; i++){
        printf("%d\n", i+1);
    }
    linha(30, '+');

    printf("%d",isequal(5,6));
    printf("%d",isequal(5,5));
}


void linha(int tamanho, char desenho){
     for (int i = 0; i < tamanho; i++){
        putchar(desenho);
    }
    putchar('\n');
}
