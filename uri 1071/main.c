#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,soma;
    soma=0;

    scanf("%d %d",&x,&y);
    if(x<y){
        for(i=x+1;i<y;i++){


        if(i%2 != 0) {
        soma = soma +i;
        }
        }
    }
    else{
        for(i = y+1; i<x;i++){
         if(i%2!= 0){
            soma = soma +i;
         }
        }
    }
    printf("%d",soma);
    return 0;
}
