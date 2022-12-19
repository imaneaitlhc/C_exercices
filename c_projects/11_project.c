#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
  int T [4];
  int i;
  for (i=0; i< 4; i++) {
  printf("veuillez saisir le numéro de l'étudiant numéro N° %d : ", i+1);
  scanf("%d",&T[i]); }
  float M,S;
  S = 0;
  for (i=0; i<4; i++) 
 S = S + T[i];
 M =  S / 4;
 {printf ("La moyenne des notes est: %.2f \n", M);
 return 0;
}
}