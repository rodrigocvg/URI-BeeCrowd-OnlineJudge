#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[1000],i,T,j;


    scanf("%d",&T);

    for(i=0;i<1000;i++){
        N[i]=i%T;
        printf("N[%d] = %d\n", i,N[i]);
    }
    return 0;
}
