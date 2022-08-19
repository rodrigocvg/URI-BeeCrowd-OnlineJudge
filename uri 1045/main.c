#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,maior,meio,menor;
    scanf("%lf %lf %lf", &A,&B,&C);
   if (A >= B && B >= C){
		maior = A;
		meio = B;
		menor = C;
	}

	if (B >= A && B >= C){
		maior = B;
		meio = A;
		menor = C;
	}

	else{
		maior = C;
		meio = A;
		menor = B;
	}

	if (maior >= meio + menor){
		printf("NAO FORMA TRIANGULO\n");
	}

	else if ( maior*maior == meio*meio + menor*menor){

		printf("TRIANGULO RETANGULO\n");

	}

	else if (maior*maior > meio*meio + menor*menor){

		printf("TRIANGULO OBTUSANGULO\n");

	}

	else if (maior* maior < meio*meio + menor*menor){

		printf("TRIANGULO ACUTANGULO\n");
	}

	if (maior == meio && maior == menor){
		printf("TRIANGULO EQUILATERO\n");
	}
    if (maior == meio && maior != menor && menor != meio){
		printf("TRIANGULO ISOSCELES\n");
	}

	if (meio == menor && maior != meio && maior != menor){
		printf("TRIANGULO ISOSCELES\n");

	}
	if (maior == menor && menor != meio && maior != meio){
		printf("TRIANGULO ISOSCELES\n");
	}

    return 0;
}
