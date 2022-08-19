#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, p;
    float num;
    p=0;
    cont=1;
    while(cont<=6){
        scanf("%f",&num);
        if(num>0){
          p=p+1;
        }

        cont=cont+1;


    }
    printf("%d valores positivos\n",p);
    return 0;
}

