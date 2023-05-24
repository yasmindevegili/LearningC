#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    
    int Maior(){    
    if(a>b && a>c){
        printf("%i\n", a);
        if(b>c){
            printf("%i\n",b);
            printf("%i\n",c);
            printf("\n%i\n%i\n%i", c, b, a);
        }
        else{
            printf("%i\n",c);
            printf("%i\n",b);
            printf("\n%i\n%i\n%i", b, c, a);
        }
    }
    else if(b>c && b>a){
        printf("%i\n",b);
        if(a>c){
            printf("%i\n",a);
            printf("%i\n",c);
            printf("\n%i\n%i\n%i", c, a, b);
        }
        else{
            printf("%i\n",c);
            printf("%i\n",a);
            printf("\n%i\n%i\n%i", a, c, b);
        }
    }
    else{
        printf("%i\n",c);
        if(b>a){
            printf("%i\n",b);
            printf("%i\n",a);
            printf("\n%i\n%i\n%i", a, b, c);
        }
        else{
            printf("%i\n",a);
            printf("%i\n",b);
            printf("\n%i\n%i\n%i", b, a, c);
        }
       
    }
    }
    Maior();
    return 0;
}
