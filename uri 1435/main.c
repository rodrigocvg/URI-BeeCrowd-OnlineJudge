#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,rest,l,a,b;
    while(1){
        scanf("%d",&N);
        if(N==0){
            break;
        }
    else{


    int M[N][N];
    rest=N/2;
    if(N%2==1)rest++;
    a=0;
    b=N-1;
    for(l=1;l<=rest;l++){
            for(i=a;i<=b;i++){
        for(j=a;j<=b;j++){
        M[i][j]=l;
        }
    }
    a++;
    b--;
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
        if(j==0){
        printf("%3d",M[i][j]);
        }
        else{
        printf(" %3d",M[i][j]);
        }
        }
        printf("\n");
    }
        printf("\n");
    }
    }

    return 0;
}
