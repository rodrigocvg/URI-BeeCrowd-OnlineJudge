#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x,y,i,p,somaimpares,j;



    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        somaimpares=0;

        scanf("%d %d", &x,&y);
        if(x<y){
            for(p=x+1;p<y;p++){
            if(p%2!=0){
            somaimpares+=p;

            }
        }
        }


        if(y<x){
            for(p=y+1;p<x;p++){
            if(p%2!=0){
                somaimpares+=p;

            }
            }
        }


       printf("%d\n",somaimpares);

    }

    return 0;
}
