#include <stdio.h>
#include <string.h>
#define N 50

int main(void){
	char nome[N] = "yasmin";
	char sobrenome[N] = "devegili";
	char cp_nome[N];
	char cp_sobrenome[N];
	
	strcpy(cp_nome, nome);
	strcpy(cp_sobrenome, sobrenome);
	printf("Tamanhos: %d e %d\n", strlen(nome), strlen(sobrenome));
	printf("1ra string em minisculas: %s\n", strlwr(cp_nome));
	printf("2ra string em maiusculas: %s\n", strupr(cp_sobrenome));
	
	if(strcasecmp(nome, sobrenome) < 0){
		printf("%s // %s\n", nome, sobrenome);
	}
	else{
		printf("%s // %s\n", sobrenome, nome);
	}
	
	printf("Concatenadas: %s\n",strcat(nome, sobrenome));
}
