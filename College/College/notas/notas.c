#include <stdio.h>
#include <string.h>
float notas(float n1, float n2, float n3, char letra)
{
    int ret = strcmp(letra, 'A');
    float calculo;
    if (ret == 0)
    {
        calculo = (n1 + n2 + n3) / 3;
        printf("%.2f", calculo);
    }
    else if (strcmp(letra, 'P'))
    {
        calculo = ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
        printf("%.2f", calculo);
    }
    else if (strcmp(letra, 'H'))
    {
        calculo = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
        printf("%.2f", calculo);
    }
    else
    {
        printf("Erro");
    }
}

int main()
{
    float nota1, nota2, nota3;
    char letras;

    printf("Digite as notas do aluno:\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    fflush(stdin);

    printf("Digite a opcao:");
    scanf("%c", &letras);

    notas(nota1, nota2, nota3, letras);
}