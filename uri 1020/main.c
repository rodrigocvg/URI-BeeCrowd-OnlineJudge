#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idadedia, anos, meses, dias;
    scanf("%d",&idadedia);
    anos= idadedia/365;
    idadedia= idadedia%365;
    meses= idadedia/30;
    dias= idadedia%30;
    printf("%d ano(s)\n", anos);
    printf("%d mese(s)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
