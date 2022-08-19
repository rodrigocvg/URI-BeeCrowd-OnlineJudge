#include <stdio.h>
#include <stdbool.h>

int main ()
{

	unsigned char casos;
	short i = 1, rpmAtual = -1, rpmAnterior = 0, falha = false;

	scanf("%hhd", &casos);

	do
	{
		rpmAnterior = rpmAtual;
		scanf("%hd", &rpmAtual);
		if ((!falha) && (rpmAtual < rpmAnterior))
		{
			falha = true;
			printf("%d\n", i);
		}

		i++;
	}	while (i <= casos);

	if (!falha)
		printf("0\n");
		return 0;
}
