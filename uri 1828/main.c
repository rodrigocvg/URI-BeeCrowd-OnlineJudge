#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;
    char R[20];
    char S[20];



    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s %s",R,S);
     if (strcmp(R, S) == 0)
      printf("Caso #%d: De novo!\n",i);

    else if (strcmp(R, "Spock") == 0 && strcmp(S, "pedra") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "lagarto") == 0 && strcmp(S, "Spock") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "tesoura") == 0 && strcmp(S, "lagarto") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "papel") == 00 && strcmp(S, "Spock") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "tesoura") == 0 && strcmp(S, "papel") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "papel") == 0 && strcmp(S, "pedra") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "lagarto") == 0 && strcmp(S, "papel") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "pedra") == 0 && strcmp(S, "lagarto") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "Spock") == 0 && strcmp(S, "tesoura") == 0)
     printf("Caso #%d: Bazinga!\n",i);

    else if (strcmp(R, "pedra") == 0 && strcmp(S, "tesoura") == 0)
      printf("Caso #%d: Bazinga!\n",i);

    else printf("Caso #%d: Raj trapaceou!\n",i);

    }

    return 0;
}
