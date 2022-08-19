#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x=0,num,i,j;
    while(scanf("%d",&n)!= EOF){
        x++;
        num=1;
         for(i=1;i<=n;i++){
            for(j=i;j>0;j--){
                num++;
            }
         }
        if(n==0) printf("Caso %d: %d numero\n",x,num);
        else printf("Caso %d: %d numeros\n",x,num);
        printf("0");
         for(i=1;i<=n;i++){
            for(j=i;j>0;j--){
                printf(" %d",i);
            }
         }
         printf("\n\n");
    }
    return 0;
}
