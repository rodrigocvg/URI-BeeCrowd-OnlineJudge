#include <stdio.h>
#include <stdlib.h>

int main()
{
    double M[12][12];
    char T[2];
    double soma=0;
    int i,j;


    scanf("%s",T);


    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
        scanf("%lf",&M[i][j]);

        }
    }
    for(i=0;i<12;i++){
        for(j=i+1;j<12;j++){
            soma+=M[i][j];
        }
    }
    if(T[0]=='S'){
        printf("%.1lf\n",soma);
    }
    else if(T[0]=='M'){
        printf("%.1lf\n",soma/66.0);
    }
    return 0;
}
