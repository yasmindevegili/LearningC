#include <stdio.h>
int main(){
    float n[5], maior, menor;
    int i;
    for(i=0;i<5;i++){
    printf("Digite a nota %i:", i+1);
    scanf("%f", &n[i]);
    if (i==0){
        maior = n[i];
        menor = n[i];
    }
    if(n[i]>maior){
        maior = n[i];
    }
    if(n[i]<menor){
        menor = n[i];
    }
    }
    
    printf("Maior: %.1f\nMenor: %.1f", maior, menor);
    
}
