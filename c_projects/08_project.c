#include<stdio.h>
#include<stdlib.h>

/* ce programme demande à l'utilisateur de saisir les notes de étudiants (318), puis le programme calcule et affiche la moyenne*/
/* Pratique des tableaux*/
int main ()
{
  float T [4];
  int i;
  float S, M;
for (i = 0; i < 4; i++){
  printf("saisir la note de l'étudiant N°%d:  ", i+1);
  scanf("%f", &T[i]);
}
S = 0;
for (i = 0; i < 4; i++) 
 S = S + T[i];
 M =  S / 4;
 {printf ("La moyenne des notes est: %.2f \n", M);
 return 0;
}
}
