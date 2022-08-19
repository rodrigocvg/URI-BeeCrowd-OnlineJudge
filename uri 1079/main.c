#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    float i,a,b,c,media;
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        scanf("%f %f %f", &a,&b,&c);
        media = ((a * 2.0) + (b * 3.0) + (c * 5.0))/10.0;
        printf("%.1f\n", media);
    }
    return 0;
}
