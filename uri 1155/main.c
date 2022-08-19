#include <stdio.h>
#include <stdlib.h>

int main()
{
    double i,f,S;
    S=0;
    f=0;

    for(i=1;i<=100;i++){
        f=1/i;
        S+=f;

    }
    printf("%.2lf\n",S);

    return 0;
}
