#include <stdio.h>

void linha(int tamanho, char desenho){
	int i;
	for(i = 0; i <= tamanho; i++){
		putchar(desenho);
	}
	putchar('\n');
}

int main(){
	linha(3 ,'-');
	linha(5 ,'*');
	linha(7 ,'#');
	linha(5 ,'*');
	linha(3 ,'-');
}
