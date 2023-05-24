#include <stdio.h>

int main()
{
    int N, M;
    
    do{
    scanf("%i", &N);
    }while(N<1 || N>40);
    
    do{
    scanf("%i", &M);
    }while(M<1 || M>40);
    
    printf("%i", N-M);

    return 0;
}
