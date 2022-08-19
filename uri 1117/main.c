#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,soma,media;
    int i;
    soma=0;
    media=0;
    while(i<2){
        scanf("%f",&x);
        if(x>=0&&x<=10){
        i++;
        soma=soma+x;
        media = soma/2;
        }
        else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n",media);
    return 0;
}
