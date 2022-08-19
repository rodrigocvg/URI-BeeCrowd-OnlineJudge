
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x,y,i,j,soma;
    soma=0;

    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d %d",&x,&y);
        if(x%2!=0){
            soma=0;
            for(j=1;j<=y;j++){
                soma+=x;
                x=x+2;
            }
            printf("%d\n",soma);
        }
        else{
         x++;
         soma=0;
         for(j=1;j<=y;j++){
         soma+=x;
         x+=2;
         }
         printf("%d\n",soma);
        }
    }
    return 0;
}
