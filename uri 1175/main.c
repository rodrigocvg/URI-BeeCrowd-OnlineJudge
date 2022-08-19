#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N[20],i,temp;

    for(i=0;i<=19;i++){
        scanf("%d",&N[i]);
    }
    for(i=0;i<10;i++){
    temp=N[i];
    N[i]=N[19-i];
    N[19-i]=temp;

    }
   for(i=0;i<=19;i++){
       printf("N[%d] = %d\n",i,N[i]);
   }
    return 0;
}
