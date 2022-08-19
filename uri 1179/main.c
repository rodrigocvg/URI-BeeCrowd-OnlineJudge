#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par[5],impar[5],qp=0,qi=0,x,cont,p;

    for(cont=0; cont<15; cont++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            par[qp]=x;
            qp++;
            if(qp==5)
            {
                for(p=0; p<5; p++)
                {
                    printf("par[%d] = %d\n",p,par[p]);
                }
                qp=0;
            }

        }
        else
        {
            impar[qi]=x;
            qi++;
            if(qi==5)
            {
                for(p=0; p<5; p++)
                {
                    printf("impar[%d] = %d\n",p,impar[p]);

                }
                qi=0;

            }

        }
    }

    for(p=0; p<qi; p++)
    {
        printf("impar[%d] = %d\n",p,impar[p]);
    }
    for(p=0; p<qp; p++)
    {
        printf("par[%d] = %d\n",p,par[p]);
    }
    return 0;
}
