#include <stdio.h>
int main(){
float n[3][3] = {{8,6,7},{3,5,10},{9,2,7}};
float soma = 0;
float mediaGeral;
float maiorNota, menorNota = n[0][0];
int maiorMediaAluno;
int maiorMediaProva;

//Maior e Menor Nota
for(int aluno=0; aluno<3; aluno++){
    for(int nota=0; nota<3; nota++){
        
        soma+=n[aluno][nota]; 
        
            if(n[aluno][nota]>maiorNota){
                maiorNota = n[aluno][nota];
            }
            if(n[aluno][nota]<menorNota){
                menorNota = n[aluno][nota];
            }
    }
}

//Maior Media prova
float mediaProva1 = (n[0][0]+n[1][0]+n[2][0])/3;
float mediaProva2 = (n[0][1]+n[1][1]+n[2][0])/3;
float mediaProva3 = (n[0][2]+n[1][2]+n[2][2])/3;

if(mediaProva1>mediaProva2&&mediaProva1>mediaProva3){
    maiorMediaProva = 1;
}
else if(mediaProva2>mediaProva1&&mediaProva2>mediaProva3){
    maiorMediaProva = 2;
}
else{
    maiorMediaProva = 3;
}

//Média alunos
float mediaAluno1 = (n[0][0]+n[0][1]+n[0][2])/3;
float mediaAluno2 = (n[1][0]+n[1][1]+n[1][2])/3;
float mediaAluno3 = (n[2][0]+n[2][1]+n[2][2])/3;

//Maior média de alunos
if(mediaAluno1>mediaAluno2&&mediaAluno1>mediaAluno3){
    maiorMediaAluno = 1;
}
else if(mediaAluno2>mediaAluno1&&mediaAluno2>mediaAluno3){
    maiorMediaAluno = 2;
}
else{
    maiorMediaAluno = 3;
}

//Média geral
mediaGeral = soma /9;

printf("A media geral vale: %.2f\n", mediaGeral);
printf("A maior nota eh: %.2f\n", maiorNota);
printf("A menor nota eh: %.2f\n", menorNota);
printf("A média do aluno 1 eh: %.2f\n", mediaAluno1);
printf("A média do aluno 2 eh: %.2f\n", mediaAluno2);
printf("A média do aluno 3 eh: %.2f\n", mediaAluno3);
printf("O aluno com maior média eh o aluno %i\n", maiorMediaAluno);
printf("A prova com maior media foi a prova %i\n", maiorMediaProva);

return 0;
}
