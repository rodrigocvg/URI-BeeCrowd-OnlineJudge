#include <stdio.h>
#include <stdlib.h>

int main()
{
    double X, Ns, R;
    int P;
    char letra = '%';

    scanf("%lf", &X);

    if(X>0.00&&X<=400.00){
             P=15;
    }
    if(X>400.00&&X<=800.00){
             P=12;
    }
    if(X>800.00&&X<=1200.00){
             P=10;
    }
    if(X>1200.00&&X<=2000.00){
             P=7;
    }
    if(X>2000.00){
             P=4;
    }
    R = (X * P)/100;
    Ns = R + X;
    printf("Novo Salario: %.2lf\n",Ns);
    printf("Reajuste ganho: %.2lf\n", R);
    printf("Em percentual: %d %c\n", P, letra);








    return 0;
}
