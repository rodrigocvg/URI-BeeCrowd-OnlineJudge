#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i,pares, impares, positivos, negativos;
    pares = 0;
    impares = 0;
    positivos = 0;
    negativos = 0;

    for(i=0;i<5;i++){
        scanf("%d",&x);
        if(x%2==0){
        pares++;
        }
        if(x%2!=0){
        impares++;
        }
        if(x>0){
        positivos++;
        }
        if(x<0){
        negativos++;
        }


    }
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);
    return 0;
}
