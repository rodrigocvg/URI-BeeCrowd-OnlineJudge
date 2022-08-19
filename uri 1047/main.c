#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Hi,Mi,Hf,Mf,thoratotal, tmintotal;
    scanf("%d %d %d %d",&Hi,&Mi,&Hf,&Mf);
    thoratotal=Hf-Hi;
    if(thoratotal<0){
        thoratotal=24+(Hf-Hi);
    }
    tmintotal=Mf-Mi;
    if(tmintotal<0){
        tmintotal=60+(Mf-Mi);
        thoratotal--;
    }
    if(Hi==Hf&&Mi==Mf){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",thoratotal, tmintotal);
    }

    return 0;
}























