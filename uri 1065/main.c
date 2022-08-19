#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i,pares;
    pares = 0;

    for(i=0;i<5;i++){
        scanf("%d",&x);
        if(x%2==0){
        pares++;
        }

    }
    printf("%d valores pares\n", pares);
    return 0;
}
