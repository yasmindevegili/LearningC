#include <stdio.h>

int main(void){
	int opcao, n1, n2, result_soma, result_mult;
	
	while(opcao<=2){
		printf("Menu de opcoes:\n1.Somar dois numeros;\n2.Multiplicar dois numeros;\n3.Sair.\nOque deseja fazer?\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				printf("Digite os valores:");
				scanf("%d %d", &n1, &n2);
				result_soma = n1+n2;
				printf("O resultado sera: %d para a opcao %d\n", result_soma, opcao);
				break;
			case 2:
				printf("Digite os valores:");
				scanf("%d %d", &n1, &n2);
				result_mult = n1*n2;
				printf("O resultado sera: %d para a opcao %d\n", result_mult, opcao);
				break;
		}
	}
	
	
	return 0;
}
