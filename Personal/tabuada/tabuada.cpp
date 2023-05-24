#include <stdio.h>

int main(void){
	int n, i;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		printf("%d X %d = %d\n", i, n, i*n);
	}
	
	return 0;
}
