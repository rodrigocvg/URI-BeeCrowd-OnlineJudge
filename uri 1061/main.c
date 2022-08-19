#include <stdio.h>
#include <stdlib.h>

int main()
{
    int DIA1, DIA2, HD1, MD1, SD1, HD2, MD2, SD2, DURDIA, DURHORA, DURMIN, DURSEG;


    scanf("Dia %d", &DIA1);
    scanf("%d : %d : %d\n", &HD1, &MD1, &SD1);
    scanf("Dia %d", &DIA2);
    scanf("%d : %d : %d", &HD2, &MD2, &SD2);

    DURDIA = DIA2-DIA1;
    DURHORA = HD2-HD1;
    DURMIN = MD2-MD1;
    DURSEG= SD2-SD1;

    if(DURSEG<0){
        DURSEG = DURSEG+60;
        DURMIN--;
    }
    if(DURMIN<0){
        DURMIN=DURMIN+60;
        DURHORA--;
    }
    if(DURHORA<0){
        DURHORA=DURHORA+24;
        DURDIA--;
    }
    printf("%d dia(s)\n",DURDIA);
    printf("%d hora(s)\n",DURHORA);
    printf("%d minuto(s)\n",DURMIN);
    printf("%d segundo(s)\n",DURSEG);

    return 0;
}
