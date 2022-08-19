#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c1, n1, c2, n2;
    double v1, v2, total;
    scanf("%d %d %lf", &c1, &n1, &v1);
    scanf("%d %d %lf", &c2, &n2, &v2);
    total = (n1 * v1) + (n2 * v2);
    printf("VALOR A PAGAR R$ %.2lf\n", total);

    return 0;
}
