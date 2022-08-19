#include <stdio.h>


int main()
{
    double M[12][12],soma;
    int L,i,j;
    char T[2];



    scanf("%d",&L);
    scanf("%s",T);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {

            scanf("%lf",&M[i][j]);
            if(j==L)
            {
                soma+=M[i][L];
            }
        }
    }

    if(T[0]== 'S'){
        printf("%.1lf\n",soma);
    }
    else if(T[0]=='M')
    {
        soma=soma/12;
        printf("%.1lf\n",soma);;
    }


    return 0;
}
