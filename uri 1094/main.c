#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, x,total,totalcoelho=0, totalrato=0, totalsapo=0;
    float PC, PR, PS;
    char y;


    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d %c", &x, &y);
        if(y=='C'){
            totalcoelho+=x;
        }
        if(y=='R'){
            totalrato+=x;
        }
        if(y=='S'){
            totalsapo+=x;
        }
        total = totalcoelho + totalrato + totalsapo;
        PC = (totalcoelho*100.00)/total;
        PR = (totalrato*100.00)/total;
        PS = (totalsapo*100.00)/total;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalcoelho);
    printf("Total de ratos: %d\n", totalrato);
    printf("Total de sapos: %d\n", totalsapo);
    printf("Percentual de coelhos: %.2f %%\n", PC);
    printf("Percentual de ratos: %.2f %%\n", PR);
    printf("Percentual de sapos: %.2f %%\n", PS);

    return 0;
}
