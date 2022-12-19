#include<stdio.h>
#include<stdlib.h>

/* Ce programme demande à l'utilisateur de saisir 2 entiers A et B et change le contenu de A et B puis
affiche A et B */
/* changement de variable sans utiliser une variable intermediaire*/

int main()
{
  int A,B;
  printf("Veuillez tapez la valeur de A : ");
  scanf("%d", &A);
  printf("Veuillez tapez la valeur de B : ");
  scanf("%d", &B);
  /* changement de variable sans utiliser une variable intermediaire*/
  A = A + B; 
  B = B;
  B = A - B;
  A = A;
  A = A - B;
  printf("la nouvelle valeur de A est : %d \n", A);
  printf("la nouvelle valeur de B est : %d \n",B);
  return 0;
}