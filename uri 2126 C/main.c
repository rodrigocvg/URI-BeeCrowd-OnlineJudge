#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char n1[50],n2[50];
    int i,j,a;
    int pos,subseq;
    int x=1;

    while(scanf("%s %s",n1,n2)!=EOF){
        x++;
    int tam1 = strlen(n1);
    int tam2 = strlen(n2);
    for(i=0;i<tam1;i++){
        a++;
    }
    for(j=0;j<tam2;j++){
        while(a--){
            if(n2[j]==n1[i]){
                subseq++;
                pos=j;
            }
        }
    }
    if(subseq>0){
        printf("Caso #%d: \n",x);
        printf("Qtd.Subsequencias: %d\n",subseq);
        printf("Pos: %d\n",pos);
    }
    else{
        printf("Caso #%d: \n",x);
        printf("Nao existe subsequencia\n");
    }
    x++;
    }





    return 0;
}
