#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p1[20], p2[20], p3[20];
    scanf("%s %s %s", p1,p2,p3);

    if(p1[0]=='v'){
       //parte de cima
       if(p2[0]=='a'){
            if(p3[0]=='c'){printf("aguia\n");
            }
            else{printf("pomba\n");
            }
       }
        if(p2[0]=='m'){
             if(p3[0]=='o'){printf("homem\n");
             }
             else{printf("vaca\n");
             }
        }
    }

    else {
        //parte de baixo
        if(p2[0]=='i'){
            if(p3[2]=='m'){printf("pulga\n");
            }
            else{printf("lagarta\n");
            }
        }
        if(p2[0]=='a'){
            if(p3[0]=='h'){printf("sanguessuga\n");
            }
            else{printf("minhoca\n");
            }
        }
    }







    return 0;
}
