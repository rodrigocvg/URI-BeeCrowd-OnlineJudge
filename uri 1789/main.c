#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,maior=0,i;

    while(scanf("%d",&n)!=EOF){
        int lesma;

        for(i=1,maior=0;i<=n;i++){
            scanf("%d",&lesma);
            if(lesma>maior){
                maior=lesma;
            }
        }
        if(maior<10){
            printf("1\n");
        }
        else if(maior<20){
            printf("2\n");
        }
        else if(maior>=20){
            printf("3\n");
        }
    }

    return 0;
}
