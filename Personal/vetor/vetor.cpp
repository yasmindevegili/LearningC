#include <stdio.h>
#define N 10
int main(){
	float notas[N], soma = 0, media;
	int i;
	printf("Informe as notas.");
	for(i=0; i<N; i++){
		scanf("%f", &notas[i]);
		soma = notas[i] + soma;
	}
	media = soma/N;
	for(i=0; i<N; i++){
	printf("%.3f ", notas[i]);
	}
	printf("Media: %.3f", media);
	
	return 0;
}
