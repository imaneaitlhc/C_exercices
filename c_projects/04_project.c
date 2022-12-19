#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* ce programme demande un temps T entier exprimé en s, et qui le converti en heure H, minute M, secondes S*/

int main()

 {
  int T,H,M,S,R;
  printf("Veuillez saisir le temps T en secondes: ");
  scanf("%d", &T);
  H = T / 3600;
  R = T % 3600;
  M = R / 60;
  S = R % 60;
  printf("Le temps T est %dheures %dminutes %dsecondes \n", H,M,S);
  return 0;

 }