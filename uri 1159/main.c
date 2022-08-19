#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,soma;
    soma=0;


    while(1){
        scanf("%d",&x);
        if(x==0)break;
        else if(x%2==0){
            soma=0;
            for(i=x;i<=x+8;i+=2){
                soma+=i;
            }
            printf("%d\n",soma);
        }
        else if(x%2!=0){
        soma=0;
        for(i=x+1;i<=x+9;i+=2){
                soma+=i;
            }
            printf("%d\n",soma);
        }

    }
    return 0;
}
