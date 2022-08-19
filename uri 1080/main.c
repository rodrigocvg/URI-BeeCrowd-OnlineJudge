#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,maior, posicao;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&x);
        if(x>maior)
        {
            maior = x;
            posicao = i;
        }
    }
    printf("%d\n%d\n", maior, posicao);

    return 0;
}
