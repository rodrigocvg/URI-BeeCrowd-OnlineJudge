#include <stdio.h>
#include <stdlib.h>

int main()
{

    int uni;
    int n,i,jogo,qtdcs=0;
    int uni2;

    while(scanf("%d %d",&n,&uni)!=EOF){
        for(i=0;i<n;i++){
            scanf("%d",&uni2);
            scanf("%d",&jogo);

            if(uni==uni2 && jogo==0){
                qtdcs++;
            }
        }
        printf("%d\n",qtdcs);
        qtdcs=0;
    }
    return 0;
}
