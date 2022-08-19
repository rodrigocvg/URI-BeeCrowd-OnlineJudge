#include <stdio.h>

int main() {
  float x,y;
  int a,b;
  x=0;
  y=1;
  for(x=0;x<2.1;x+=0.2){
    for(y=1;y<=3;y++){
        if(x>0&&x<1||x>1&&x<2){
            printf("I=%.1f J=%.1f\n",x,x+y);
        }
        else{
            a=x;
            b= x+y;
            printf("I=%d J=%d\n",a,b);
         }
      }
    }
    return 0;
}
