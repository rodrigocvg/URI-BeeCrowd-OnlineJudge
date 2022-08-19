#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, p;
    float num,media,soma;
    p=0;
    cont=1;
    soma=0;
    while(cont<=6){
        scanf("%f",&num);
        if(num>0){
          p=p+1;
          soma=soma+num;
        }

        cont=cont+1;


    }
    media=soma/p;
    printf("%d valores positivos\n",p);
    printf("%.1f\n",media);
    return 0;
}
