#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,min;
    char doisp;
    int atraso;
    while(scanf("%d%c%d",&h,&doisp,&min)!=EOF){
        atraso = ((h+1)-8)*60+min;
        printf("Atraso maximo: ");
        if(h<7 ||h==7 && min==0)
            printf("0\n");
        else
            printf("%d\n",atraso);

    }
    return 0;
}
