#include <stdio.h>
#include <math.h>
pi = 3.14159265359;

float volume(float R, float pi)
{
    float Vol;
    Vol = (4 * pi * (pow(R, 3))) / 3;
    return (Vol); // retornando o valor para main
}
/******************* função principal (main) *********************/
int main(void)
{
    float Vol, R;

    printf("Digite o raio:");
    scanf("%f", &R);

    // chama a função e recebe o retorno
    Vol = volume(R, pi);

    printf("Resultado = %f\n", Vol);
}