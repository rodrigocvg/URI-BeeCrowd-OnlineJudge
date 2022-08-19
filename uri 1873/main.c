#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;
    int R[20];
    int S[20];
    int compara = strcmp(R,S);


    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s",R,S);
     if (strcmp(R, S) == 0)
      printf("empate\n");

    else if (strcmp(R, "spock") == 0 && strcmp(S, "pedra") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "lagarto") == 0 && strcmp(S, "spock") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "tesoura") == 0 && strcmp(S, "lagarto") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "papel") == 00 && strcmp(S, "spock") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "tesoura") == 0 && strcmp(S, "papel") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "papel") == 0 && strcmp(S, "pedra") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "lagarto") == 0 && strcmp(S, "papel") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "pedra") == 0 && strcmp(S, "lagarto") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "spock") == 0 && strcmp(S, "tesoura") == 0)
      printf("rajesh\n");

    else if (strcmp(R, "pedra") == 0 && strcmp(S, "tesoura") == 0)
      printf("rajesh\n");

    else printf("sheldon\n");

    }

    return 0;
}
