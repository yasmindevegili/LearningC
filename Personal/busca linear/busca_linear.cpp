#include <stdio.h>
#define N 20
int main(){
	int v[N], i;
	int n;
	int posLivre = 0;
	int chave;
	
	for(i=0; i<N; i++){
		v[i]=-1;
	}
	
	printf("Informe a quantidade de elementos que deseja adicionar ao vetor.\n");
	scanf("%d", &n);
	
	printf("Informe os %d elementos.\n", n);
	
	for(posLivre=0; posLivre<n; posLivre++){
		scanf("%d", &v[posLivre]);
	}
	
	printf("Informe o elemento a ser buscado:\n");
	scanf("%d", &chave);
	
	i=0;
	while(i!=posLivre && v[i]!=chave){
		i++;
	}
	
	if(i==posLivre)
		printf("Nao encontado.");
	else
		printf("Encontrado na posicao %d.", i);
	
	return 0;
}
