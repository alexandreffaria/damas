#include <stdio.h>

int main(){

    float salario;

    printf("Quanto ce ganha papai? ");
    scanf("%f", &salario);

    salario = salario > 1000 ? salario * 1.05 : salario * 1.07;
    printf("Novo din din: %.2f\n", salario);
}