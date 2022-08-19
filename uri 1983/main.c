#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x[10000],maior=0,pos,a=0;
    float y[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%f",&x[i],&y[i]);
        if(y[i]>maior){
            maior = y[i];
            pos=x[i];
        }
    }
    if(y[i]>=8)
        printf("%d\n",pos[i]);
    else
        printf("Minimum note not reached\n");

    return 0;
}
