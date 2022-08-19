#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N,i,j,leds;
    char L[1000];
    int tamanho;


    scanf("%d",& N);

    for(i=0;i<N;i++){
        scanf("%s",L);
        tamanho = strlen(L);
        leds=0;
        for(j=0;j<tamanho;j++){
            if(L[j]=='1')leds+=2;
            if(L[j]=='2')leds+=5;
            if(L[j]=='3')leds+=5;
            if(L[j]=='4')leds+=4;
            if(L[j]=='5')leds+=5;
            if(L[j]=='6')leds+=6;
            if(L[j]=='7')leds+=3;
            if(L[j]=='8')leds+=7;
            if(L[j]=='9')leds+=6;
            if(L[j]=='0')leds+=6;
        }

        printf("%d leds\n",leds)
    }
    return 0;
}
