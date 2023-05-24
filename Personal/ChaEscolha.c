#include <stdio.h>

int main()
{
    int t;
    int c[5];
    int value;
    int count=0;
    
    do{
        printf("1 - Cha Branco\n2 - Cha Verde\n3 - Cha Preto\n4 - Cha de Ervas\n");
        printf("Escolha o tipo de chá (valores válidos apenas):\n");
        scanf("%i", &t);
        
    }while(t<1 || t>4);
    
    printf("Digite as respostas dos candidatos:");
    for(int i=0; i<5; i++){
        scanf("%i", &value);
        c[i] = value;
    }
    
    for(int i=0; i<5; i++){
        if(c[i]==t){
            count++;
        }
    }
    printf("%i", count);
    return 0;
}
