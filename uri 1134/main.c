#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,g,d;
    a=0;
    g=0;
    d=0;


    while(1){
        scanf("%d",&x);

        if(x==4){
                break;
        }
        if(x<1||x>4){
                continue;
        }
        if(x==1){
            a++;
        }
        if(x==2){
            g++;
        }
        if(x==3){
            d++;
        }
    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",a);
        printf("Gasolina: %d\n",g);
        printf("Diesel: %d\n",d);

    return 0;
}
