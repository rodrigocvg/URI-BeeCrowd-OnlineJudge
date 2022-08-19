#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    scanf("%d",&x);
    i=0;
    while(i<6){
        if(x%2!=0){
        i++;
        printf("%d\n",x);}
        x++;
    }
    return 0;
}
