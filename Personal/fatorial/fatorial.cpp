#include <stdio.h>

int main(void){
	int n, i, fat = 1;
	
	scanf("%d", &n);
	
	for(i=n; i>=1; i--){
		printf("%d*", i);
		fat = fat*i;	
	}
	
	printf(" = %d", fat);
		
	return 0;
}
