#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    i=1;

    scanf("%d",&N);
    for(i=1;i<=N;i++){
        if(N%i==0){
        printf("%d\n",i);

        }
    }


    return 0;
}
