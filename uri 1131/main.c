#include <stdio.h>
#include <stdlib.h>

int main()
{
   int g,i,e,gi,gg,resp,j;
   gi=0;
   gg=0;
   e=0;
   j=0;
   i=0;

   while(1){
        scanf("%d %d",&gi, &gg);
   if(gi>gg){i++;}
   else if(gg>gi){g++;}
   else if(gg==gi){e++;}

   j++;
   printf("Novo grenal (1-sim 2-nao)\n");
   scanf("%d",&resp);
   if(resp==1){continue;}
   if(resp==2){break;}
   }
   printf("%d grenais\n",j);
   printf("Inter:%d\n",i);
   printf("Gremio:%d\n",g);
   printf("Empates:%d\n",e);
   if(i>g){
    printf("Inter venceu mais\n");
   }
   if(g>i){
    printf("Gremio venceu mais\n");
   }
   if(i==g){
    printf("Nao houve vencedor\n");
   }
    return 0;
}
