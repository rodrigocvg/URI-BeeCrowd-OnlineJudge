#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,tab;
    scanf("%d",&N);

    for(i=1;i<=10;i++){

        tab=i*N;
        printf("%d x %d = %d\n",i,N,tab);
    }
    return 0;
}
