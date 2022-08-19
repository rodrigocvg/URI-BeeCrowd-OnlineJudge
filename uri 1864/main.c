#include <stdio.h>
#include <string.h>

int main()
{
    char f[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%c",f[i]);
    }
    printf("\n");
    return 0;
}
