#include <stdio.h>
#include <stdlib.h>

int main()
{
    float R,IR,resto;
    scanf("%f", &R);
    if(R>0.00&&R<=2000.00){
        IR=0;
        printf("Isento\n");
    }
    else if(R>2000.00&&R<=3000.00){
        IR = (R-2000) * 0.08;
        printf("R$ %.2f\n", IR);
    }
    else if(R>3000.00&&R<=4500.00){
        resto = R-3000;
        IR = (0.08 * 1000) + (0.18 * resto);
        printf("R$ %.2f\n", IR);
    }
    else if(R>4500.00){
        resto = R- 4500;
        IR = (0.08 * 1000) + (0.18 * 1500) + (0.28 * resto);
        printf("R$ %.2f\n", IR);
    }



    return 0;
}
