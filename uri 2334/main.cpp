#include <stdio.h>


int main ()
{

	long double qtsPatinhos;
	long double resultado;

	while (1)
	{

		scanf("%LF", &qtsPatinhos);

		if (qtsPatinhos == -1)
			break;

		if (qtsPatinhos == 0)
			printf("0\n");
		else
			printf("%.LF\n", --qtsPatinhos);

	}

     return 0;
}
