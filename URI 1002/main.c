#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n,i,j,impares,soma=0;

    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        soma=0;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            for(j=y; j<=x; j++)
            {
                if(i%2!=0)
                {
                    soma+=j;
                }
            }
        }
        soma=0;
        if(y>x)
        {
            for(j=x; j<=y; j++)
            {
                if(j%2!=0)
                {
                    soma+=j;
                }
            }
        }
    printf("%d",soma);
    }

        return 0;
    }
