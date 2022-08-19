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
    for(i=1;i<11;i++){
        if(i<=5){
        for(j=11;j>11-i;j--){
            soma+=M[i][j];
        }
        }
        else{
        for(j=11;j>i;j--){
            soma+=M[i][j];
        }
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
