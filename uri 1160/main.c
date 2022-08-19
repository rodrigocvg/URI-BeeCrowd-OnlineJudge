#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,PA,PB,i,cont;
    double G1,G2;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        cont=0;

        scanf("%d %d",&PA,&PB);
        scanf("%lf %lf",&G1,&G2);
        while(PA<=PB && cont<101){
        PA+=PA*G1/100;
        PB+=PB*G2/100;
        cont++;
        }
        if(cont>100){
            printf("Mais de 1 seculo.\n");
        }
        else{
            printf("%d anos.\n",cont);
        }
    }

    return 0;
}
