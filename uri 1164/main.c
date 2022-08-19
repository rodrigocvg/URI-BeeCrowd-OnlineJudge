#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x,i,d,soma,c;
    d=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&x);
        c=x/2;
        soma=0;
        for(d=1;d<=c;d++){
            if(x%d==0){
            soma+=d;
            }
        }
            if(soma==x){
            printf("%d eh perfeito\n",x);
        }
        else if(soma!=x){
            printf("%d nao eh perfeito\n",x);
          }
       }
    return 0;
}
