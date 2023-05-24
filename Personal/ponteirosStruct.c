#include <stdio.h>

// struct
typedef struct filial
{

    char nomeFilial[50];
    float totalVendido;
    float qtdVendido;

} tabela_filial;

// inicializando a struct
tabela_filial tlb_f[3];

// declaração de var globais
int i = 0;
float *qtdVendas;
float *totalVendas;
char *nome;

int media()
{
    float soma_denominador;
    float soma_numerador;

    for (i = 0; i <= 3; i++)
    {
        // igualando o ponteiro a var que ele irá apontar
        totalVendas = &tlb_f[i].totalVendido;
        qtdVendas = &tlb_f[i].qtdVendido;

        soma_denominador = soma_denominador + *qtdVendas;
        
    }
    float media = soma_numerador / soma_denominador;
    printf("Media: %.2f\n", media); //erro
    printf("Total: %.2f\n", soma_numerador);
    printf("Quantidade vendida: %.2f\n", soma_denominador); //endereço
}

int cadastro()
{
    printf("Ola. Digite o nome da filial %i: ", i + 1);
    fgets(tlb_f[i].nomeFilial, 50, stdin);
    printf("\nDigite o total vendido: ");
    scanf("%f", &tlb_f[i].totalVendido);
    printf("\nDigite a quantidade de produtos vendidos: ");
    scanf("%f", &tlb_f[i].qtdVendido);
    i++;
    if (i < 3)
    {
        printf("\nAinda faltam %i cadastros.\n", 3 - i);
    }
    else
    {
        printf("\nJa foram cadastradas todas as filiais!\n");
        media();
    }
}

int main()
{
    int op;

    do
    {
        printf("\nEscolha um das opcoes:\n");
        printf("1 - Cadastro\n");
        printf("2 - Sair\n");
        scanf("%i", &op);
        getchar();

        switch (op)
        {
        case 1:
            cadastro();
            break;
        }
    } while (op != 2);
}
