#include <stdio.h>
#include <stdlib.h>

int main()
{
    double N;
    int resto, centavos, cem, cinquenta, vinte, dez, cinco, dois, um, cinquentacent, vintecincocent, dezcent, cincocent, umcent;
    scanf("%lf", &N);
    resto = N;
    centavos = ((N-resto)*100);
    cem = resto/100;
    resto = resto-(cem*100);
    cinquenta = resto/50;
    resto = resto-(cinquenta*50);
    vinte = resto/20;
    resto = resto-(vinte*20);
    dez = resto/20;
    resto = resto-(dez*10);
    cinco = resto/5;
    resto = resto-(cinco*5);
    dois = resto/2;
    resto = resto-(dois*2);
    um = resto/1;

    cinquentacent = centavos/50;
    centavos = centavos % 50;
    vintecincocent = centavos/25;
    centavos = centavos % 25;
    dezcent = centavos/10;
    centavos = centavos % 10;
    cincocent = centavos/05;
    centavos = centavos % 05;
    umcent = centavos/1;




    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",cem);
    printf("%d nota(s) de R$ 50.00\n",cinquenta);
    printf("%d nota(s) de R$ 20.00\n",vinte);
    printf("%d nota(s) de R$ 10.00\n",dez);
    printf("%d nota(s) de R$ 5.00\n",cinco);
    printf("%d nota(s) de R$ 2.00\n",dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",um);
    printf("%d moeda(s) de R$ 0.50\n",cinquentacent);
    printf("%d moeda(s) de R$ 0.25\n",vintecincocent);
    printf("%d moeda(s) de R$ 0.10\n",dezcent);
    printf("%d moeda(s) de R$ 0.05\n",cincocent);
    printf("%d moeda(s) de R$ 0.01\n",umcent);






    return 0;
}
