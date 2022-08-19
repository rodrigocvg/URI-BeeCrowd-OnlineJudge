#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,t;
    unsigned long long int Fib[61];

    Fib[0]=0;
    Fib[1]=1;
    for(i=2;i<61;i++){
        Fib[i]=Fib[i-1]+Fib[i-2];
    }

    scanf("%d",&t);

    for(i=0;i<t;i++){
        scanf("%d",&N);
        printf("Fib(%d) = %llu\n",N,Fib[N]);
    }

    return 0;
}
