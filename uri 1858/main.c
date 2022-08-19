#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,menor,posmenor=0;

    scanf("%d",&n);
    int vet[n];

    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }

    menor = vet[0];

    for(i=0;i<n;i++){
        if(vet[i]<menor){
            menor=vet[i];
            posmenor=i;
        }
    }

    printf("%d\n",posmenor+1);
    return 0;
}
