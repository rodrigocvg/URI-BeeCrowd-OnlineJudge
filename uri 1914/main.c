#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,soma=0;
    char j1[50],j2[50];
    char parimpar1[10];
    char parimpar2[10];
    int n1,n2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s %s %s",j1,parimpar1,j2,parimpar2);
        scanf("%d %d",&n1,&n2);
        soma=n1+n2;
        if(strcmp(parimpar1,"PAR")==0 && strcmp(parimpar2,"IMPAR")==0){
            if(soma%2==0){
                printf("%s\n",j1);
            }
            else{
                printf("%s\n",j2);
            }
        }

        else if(strcmp(parimpar1,"IMPAR")==0 && strcmp(parimpar2,"PAR")==0){
            if(soma%2!=0){
                printf("%s\n",j1);
            }
            else{
                printf("%s\n",j2);
            }
        }
        else if(strcmp(parimpar2,"PAR")==0 && strcmp(parimpar1,"IMPAR")==0){
            if(soma%2==0){
                printf("%s\n",j2);
            }
            else{
                printf("%s\n",j1);
            }
        }

        else if(strcmp(parimpar2,"IMPAR")==0 && strcmp(parimpar1,"PAR")==0){
            if(soma%2!=0){
                printf("%s\n",j2);
            }
            else{
                printf("%s\n",j1);
            }
        }


    }
    return 0;
}
