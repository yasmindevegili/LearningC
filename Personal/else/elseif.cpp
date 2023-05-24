 #include <stdio.h>
 
 int main(){
 	int trabalho;
 	int prova;
 	int soma;
 	int media;
 	int i;
 	
 	for(i=1; i<=3; i++){
 		printf("Digite o valor da nota do trabalho:");
 		scanf("%d", &trabalho);
 		soma = trabalho + soma;
	}
	for(i=1; i<=3; i++){
 		printf("Digite o valor da nota da prova:");
 		scanf("%d", &prova);
 		soma = prova + soma;
	}
 	
 	media = soma/6;
 	printf("Sua media eh %d\n", media);
 	
 	if(media>=7){
 		printf("Parabens, aprovado!");
	 }
	 else if(media>=5){
	 	printf("Voce esta de recuperacao");
	 }
	 else{
	 	printf("Voce esta reprovado");
	 }
	 
 	
 	return 0;
 }
