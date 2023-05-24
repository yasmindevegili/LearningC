#include <stdio.h>
int main(){
    
float n[3];
float soma, media;
int i;
soma=0;
for( i=0; i<3; i++){
    printf("Digite a nota %i:", i+1);
    scanf("%f", &n[i]);
    soma+=n[i];
}
    media = soma/i;
    printf("Media = %08.2f", media);
}
