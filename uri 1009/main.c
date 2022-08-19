#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome;
    double S, V, salario;

    scanf("%s %lf %lf", &nome, &S, &V);
    salario = S + 0.15 * V;
    printf("TOTAL = %.2lf\n", salario);



    return 0;
}
