#include <stdio.h>

int main()
{
   int n,i,j,l;

   while(1){
    scanf("%d",&n);
    if(n==0)break;

    int M[n][n];
    l=1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            M[i][j]=l;
            l=l*2;
        }
    l=(M[i][0])*2;
    }


    int digitos = 0;
    int t;


		t = (M[n - 1][n - 1]);


		do
		{

			t % 10;
			t = t/10;
			digitos++;

		} while (t > 0);

		for (i= 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == 0)

					printf("%*d", digitos, M[i][j]);
				else
					printf(" %*d", digitos, M[i][j]);
			}

			printf("\n");
		}

		printf("\n");

	}

    return 0;
}
