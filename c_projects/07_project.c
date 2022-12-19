#include<stdio.h>
#include<stdlib.h>

/*ce programme demande à l'utilisateur d'afficher un numéro puis affiche les 10 premiers numéros*/
int main()
{
  int i,N;
   printf("Veuillez saisir un numéro N: " );
   scanf("%d",&N);
   for (i = N+1; i<=N+10; i++)
  {
    printf("%d \n",i);
  }
  return 0;
}
