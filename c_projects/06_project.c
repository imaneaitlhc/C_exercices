#include<stdio.h>
#include<stdlib.h>

/* ce programme calcule la somme d'un maximum de 8 nombres entrés par l'utilisateur; si un nombre négatif est entre
la boucle se termine*/
/*la boucle s'arrête si le numéro entré est négatif*/
/* La boucle Break est utilisé*/

int main()
{
  int S,i,N;
  S = 0;
  for (i=1; i <= 8; i++)
  {
    printf("veuillez saisir un numéro %d : \n ",i);
    scanf("%d", &N);
     if ( N<0 ) 
     break;
     S=S+N;
     printf("la somme est %d \n",S);
  }
}

