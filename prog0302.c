#include <stdio.h>

int main(){
	int x;
	printf("Gimme a numb: ");
	scanf("%d", &x);
	if (x){
		printf("Num diferente de 0.\n");
	}
	else{
		printf("Num igual a 0.\n");
	}

}
