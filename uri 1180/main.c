#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",&N);
    int menor,posicao,i;
    int x[N];

    scanf("%d",&x[0]);
    menor=x[0];
    posicao=0;

    for(i=1;i<N;i++){

        scanf("%d",&x[i]);

        if(x[i]<menor){
            menor=x[i];
            posicao=i;
        }

    }
    printf("Menor valor: %d\n",menor);
    printf("Posicao: %d\n",posicao);

    return 0;
}
