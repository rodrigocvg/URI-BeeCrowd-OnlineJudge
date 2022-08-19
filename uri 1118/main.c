#include<stdio.h>
#include<stdlib.h>

int main()
{
    float temp1, temp2, x;
    int i=0, resp;

    while(1)
    {
        scanf("%f", &x);

        if(x>=0 && x<=10){
            if(i==1){
                temp2 = x;
                printf("media = %.2f\n", (temp1+temp2)/2);
                i=0;
                scanf("%d", &resp);
                printf("novo calculo (1-sim 2-nao)\n");

                while(resp<1 || resp>2){
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &resp);
                    if(resp==1)
                        break;
                    else if(resp==2)
                        exit(0);
                }

                if(resp==1)
                        continue;
                else if(resp==2)
                    break;

            }else{
                temp1 = x;
                i++;
            }
        }
        else
            printf("nota invalida\n");
    }

    return 0;
}
































