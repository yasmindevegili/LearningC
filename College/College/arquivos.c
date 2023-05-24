#include <stdio.h>

int main()

{

    FILE *ent,*sai;

    char n[1];

    ent = fopen("matriz.txt","r");

    sai = fopen("result.txt","w");
    
    for(int i=1; i<=25; i++){
        fscanf(ent, "%s", n);
        printf("%s ", n);
        fprintf(sai,"%s ",n);
         if(i%5==0){
            fputs("\n", sai);
            printf("\n");
        }
    }

    fclose(ent);

    fclose(sai);

    return 0;

}
