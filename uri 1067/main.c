#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    scanf("%d",&x);
    if(x%2==0){
    x=x-1;
    }
    if(x%2!=0){
    for(i=1;i<=x;i=i+2){
        printf("%d\n",i);
    }

    }

    return 0;
}
