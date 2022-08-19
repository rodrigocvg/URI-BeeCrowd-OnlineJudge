#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Escreva o numero do funcionario, o numero de horas trabalhadas, e o valor que ele recebe por hora");
    int A, B;
    double C, SALARY;
    scanf("%d %d %lf", &A, &B, &C);
    SALARY = B * C;
    printf("NUMBER = %d\n", A);
    printf("SALARY = U$ %.2lf\n", SALARY);





    return 0;
}
