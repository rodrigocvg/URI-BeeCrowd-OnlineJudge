#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,X,i,in,out;

    scanf("%d", &N);
    in=0;
    out=0;
    for(i=0;i<N;i++){
        scanf("%d", &X);
        if(X>=10&&X<=20){
            in++;
        }
        else{
            out++;
        }
    }

     printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
