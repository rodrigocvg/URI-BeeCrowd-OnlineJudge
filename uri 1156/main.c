#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,f,S,j;
    S=0;
    f=0;
    j=1;

    for(i=1;i<=39;i+=2){

    f=i/j;
    S+=f;
    j=j*2;
    }
    printf("%.2lf\n",S);

    return 0;
}
