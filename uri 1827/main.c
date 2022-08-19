#include <stdio.h>

int main()
{
   int n,i,j;

   while(scanf("%d",&n)!=EOF){
    int M[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
              M[i][j]=2;
            }
            else if(i==n-j-1){
                M[i][j]=3;
            }
            else{
                M[i][j]=0;
            }
        }
    }
    int inicio = n/3;
    int fim = n - inicio;
    for(i=inicio;i<fim;i++){
        for(j=inicio;j<fim;j++){
            M[i][j]=1;
        }
    }
    M[n/2][n/2]=4;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%d",M[i][j]);

        }
        printf("\n");
    }
        printf("\n");
   }
    return 0;
}
