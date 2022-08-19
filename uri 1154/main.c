#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma;
    float media,i;
    soma=0;
    i=0;
   while(1){
    scanf("%d", &x);
    if(x==0){
    break;
    }
    if(x>0){
    soma=soma+x;
    i++;
    }

    }
    media=soma/i;
    printf("%.2f\n",media);

    return 0;
}
