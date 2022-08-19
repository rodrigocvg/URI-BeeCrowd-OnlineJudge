#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
    while(1){
        scanf("%d",&N);
        if(N==0){
            break;
        }
    else{


    int M[N][N];


    for(i=0;i<N;i++){
    for(j=0;j<N;j++){
        if(i==j){
            M[i][j]=1;
        }
        else if(j>i){
            M[i][j]= j-i+1;
        }
        else if(i>j){
            M[i][j]= i-j+1;
        }
        }
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
