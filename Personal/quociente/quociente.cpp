#include <stdio.h>

int main(void){
	int n, q, c = 0;
	
	printf("Digite um valor:\n");
	scanf("%d", &n);
	
	q = n;
	printf("%d", q);
	while(q!=0){
		q = q/10;
		printf("/ 10 = %d", q);
		c++;
	}
	
	if(n==0){
		printf("O valor so tem 1 digito\n");
	}
	else{
		printf("O valor tem %d digitos", c);
	}
	
	return 0;
}
