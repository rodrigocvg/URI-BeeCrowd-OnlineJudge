#include <stdio.h>

int main() {

   double N1,N2,N3,N4,MEDIA,NE,NOVAMEDIA;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    MEDIA=((N1*2.0) + (N2*3.0) + (N3*4.0) + (N4*1.0))/10.0;
    printf("Media: %.1lf\n",MEDIA);
    if(MEDIA>=7.0){
            printf("Aluno aprovado.\n");
            }
    else if (MEDIA<=5.0){
        printf("Aluno reprovado.\n");
        }
    else if(5.0<=MEDIA && MEDIA<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&NE);
        printf("Nota do exame: %.1lf\n",NE);
        NOVAMEDIA=(MEDIA+NE)/2;

        if(NOVAMEDIA>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",NOVAMEDIA);
            }
        else if(NOVAMEDIA<=4.9){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",NOVAMEDIA);
            }
    }


    return 0;
}
