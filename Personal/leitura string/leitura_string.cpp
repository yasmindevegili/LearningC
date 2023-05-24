#include <stdio.h>
#include <string.h>
#define TAM_NOME 50
#define TAM_END 100
#define TAM_CPF 15

int main(void){
	char nome[TAM_NOME];
	char endereco[TAM_END];
	char cpf[TAM_CPF];
	
	printf("Informe o seu nome.");
	fgets(nome, TAM_NOME, stdin); //par:nome da var, tamanho máx, stdin
	nome[strlen(nome)-1] = '\0'; //necessario quando não chega ao tam máx
	
	printf("Informe seu endereco.");
	gets(endereco); //obsoleto
	
	printf("Informe o seu cpf.");
	fgets(cpf, TAM_CPF, stdin); //par:nome da var, tamanho máx, stdin

	printf("Seus dados:\n");
	printf("Nome: %s\nEndereco: %s\nCPF: %s", nome, endereco, cpf);

	return 0;
	
}
