#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,j;
    j=0;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++){

    printf("%d",i);
    j=j+1;
    if(j==x){
        printf("\n");
        j=0;
    }
    else {
        printf(" ");
    }
    }
    return 0;
}
