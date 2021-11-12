#include <stdio.h>

int main(){
	int num;
	printf("Introduza um Inteiro: ");
	scanf("%d", &num);
	printf("Foi introduzido %d cujo char = '%c'\n", num, (char) num);
	printf("O char seguinte = '%c', tem o ASCII n %d\n", (char) (num+1), num+1);
}
