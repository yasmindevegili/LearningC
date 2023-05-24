#include <stdio.h>

int main(void){
	float salario, tx_inss, tx_ir;
	int opcao;
	
	printf("Digite seu salario, a taxa de IR e de INSS:");
	scanf("%f %f %f", &salario, &tx_ir, &tx_inss);
	
	printf("Escolha uma opcao abaixo:\n");
	printf("1: Salario Liquido\n2: Valor descontado pelo imposto de renda\n3: Valor descontado pelo Inss\n");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Seu salario liquido eh: %f", salario-(((salario*tx_inss)/100)+((salario*tx_ir)/100)));
			break;
		case 2:
			printf("O valor descontado pelo IR eh: %f", (salario*tx_ir)/100);
			break;
		case 3:
			printf("O valor descontado pelo INSS eh: %f", (salario*tx_inss)/100);
			break;
		default:
			printf("Erro");
			
	}
	
	
	
	return 0;
}
