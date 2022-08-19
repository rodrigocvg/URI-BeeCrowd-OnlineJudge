
#include <stdio.h>

int main()
{
    float v,d,h=0,a=0,r=0;
    while(scanf("%f %f",&v,&d)!=EOF){
        r = d/2;
        h = v/(r*r*3.14);
        a = 3.14*r*r;
        printf("ALTURA = %.2f\n",h);
        printf("AREA = %.2f\n",a);
    }

    return 0;
}
