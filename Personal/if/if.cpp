#include <stdio.h>

int main(void){
	int x;
	bool eh_impar; //0 false
	printf("Informe o numero.");
	scanf("%d", &x);
	
	if (x%2==0){
		printf("O numero eh par.");
	}
	else{
		printf("O numero eh impar.");
	}
	
	eh_impar = x%2;
	if(!eh_impar){
		printf("O numero eh par.");
	}
	else{
		printf("O numero eh impar.");
	}
	
	return 0;
}
