#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,x,y,i;
    float div;


    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d", &x,&y);

        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            div = (float)x/(float)y;
            printf("%.1f\n", div);
        }
    }

    return 0;
}
