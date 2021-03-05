#include <stdio.h>

int main(){
	int x;
	printf("Gimme a numb: ");
	scanf("%d", &x);
	if (x >= 0){
		printf("Num Positivo.\n");
	}
	else{
		printf("Num negativo.\n");
	}

}
