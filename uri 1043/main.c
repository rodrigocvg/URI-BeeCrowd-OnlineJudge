#include <stdio.h>
#include <stdlib.h>

int main()
{

    double A,B,C,PERIMETRO, AREA;
    scanf("%lf %lf %lf", &A,&B,&C);
    PERIMETRO = A+B+C;
    AREA = ((A+B)*C)/2;

    if(A+B>C && A+C>B && B+C>A){printf("PERIMETRO = %.1lf\n",PERIMETRO);}
    else{printf("AREA = %.1lf\n",AREA);}





    return 0;
}
