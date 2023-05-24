#include <stdio.h>
#include <math.h>
#define PI 3.14
#define PI_GRAUS 180
int main(void){
	float angulo; //em graus
	float radianos;
	
	printf("Informe o angulo\n");
	scanf("%f", &angulo);
	
	radianos = PI*angulo/PI_GRAUS;
	printf("O seno de %f eh %f\n", angulo, sin(radianos));
	printf("O cosseno de %f eh %f\n", angulo, cos(radianos));
	printf("A tangete de %f eh %f\n", angulo, tan(radianos));
	
}
