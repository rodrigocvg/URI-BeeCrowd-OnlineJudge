#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I,F;
    scanf("%d %d",&I,&F);
    if(I>F){
        printf("O JOGO DUROU %d HORA(S)\n",24-(I-F));
    }
        else
        if(I<F){
        printf("O JOGO DUROU %d HORA(S)\n",F-I);
        }
        else
        if(I==F){
        printf("O JOGO DUROU 24 HORA(S)\n");

        }




    return 0;
}
