#include<stdio.h>
#include<stdlib.h>

/* Ce programme demande à l'utilisateur de saisir 2 entiers A et B et change le contenu de A et B puis
affiche A et B */

int main()
{
  int A,B,C;
  printf("Veuillez tapez la valeur de A : ");
  scanf("%d", &A);
  printf("Veuillez tapez la valeur de B : ");
  scanf("%d", &B);
  /*changement de valeurs de A et B en utilsant unr valeur intermediaire C*/
  C = A;
  A = B;
  B = C; 
  printf("la nouvelle valeur de A est : %d \n", A);
  printf("la nouvelle valeur de B est : %d \n",B);
  return 0;


}