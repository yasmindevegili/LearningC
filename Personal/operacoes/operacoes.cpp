#include <stdio.h>

int main(void){
	int x, y;
	printf("Forneca dois numeros:");
	scanf("%d %d", &x, &y);
	
	printf("Soma: %d", x+y);
	printf("Subtracao: %d", x-y);
	printf("Parte inteira x/y: %d", x/y);
	printf("Resto de x por y: %d", x%y);
	 
	return 0;
}
