#include <stdio.h>

int main()
{
   int n,i,j;

   while(scanf("%d",&n)!=EOF){
    int M[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
              M[i][j]=1;
            }
            if(i==n-j-1){
                M[i][j]=2;
            }
            if(i!=j && i!=n-j-1){
                M[i][j]=3;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                printf("%d",M[i][j]);

        }
        printf("\n");
    }

   }
    return 0;
}
