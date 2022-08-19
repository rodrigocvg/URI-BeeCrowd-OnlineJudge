#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,X,Y,Z,cont;

    scanf("%d %d %d",&A,&B,&C);
    X=A;
    Y=B;
    Z=C;

    if(X>Y){
        cont=X;
        X=Y;
        Y=cont;
        }
    if(X>Z){
        cont=X;
        X=Z;
        Z=cont;
    }
    if(Y>Z){
        cont=Y;
        Y=Z;
        Z=cont;
    }
    printf("%d\n%d\n%d\n",X,Y,Z);
    printf("\n");
    printf("%d\n%d\n%d\n",A,B,C);







    return 0;
}
