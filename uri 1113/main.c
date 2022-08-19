#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,Y;
    while(scanf("%d %d",&X,&Y)){
        if(X==Y){
            break;
        }
        if(X>Y){
            printf("Decrescente\n");
        }
        else if (X<Y){
            printf("Crescente\n");
    }
    }

    return 0;
}
