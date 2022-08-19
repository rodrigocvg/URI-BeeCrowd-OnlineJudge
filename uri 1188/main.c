#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12];
    double soma=0;
    int i,j;
    char T[2];

    scanf("%s",T);


    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }

    for(i=7;i<12;i++){
        for(j=11-i+1;j<=i-1;j++){
            soma+=M[i][j];
        }
    }

    if(T[0]=='S'){
        printf("%.1lf\n",soma);
    }
    if(T[0]=='M'){
        printf("%.1lf\n",soma/30);
    }



    return 0;
}
