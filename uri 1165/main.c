#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,x,div=0;

    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&x);

        div=0;

        for(j=1;j<=x;j++)
            if(x%j==0){
                div++;
            }


        if(div>2){
            printf("%d nao eh primo\n",x);
        }
        else {
            printf("%d eh primo\n",x);
        }

    }

    return 0;
}
