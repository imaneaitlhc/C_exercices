#include<stdio.h>
#include<stdlib.h>
// printf et scanf 
/* ce programme demande à l'utiliser de taper la longueur l et la largeur L d'un réctangle pour afficher
son périmètre P et sa surface S */ 

int main()
{

 float L,l,P,S;
 printf("Quelle est la largeur L et la longueur l du réctangle ? \n ");
 scanf("%f %f", &L,&l);
 P = L+l/2;
 S = L*l;
 printf("Le périmètre est P = %.2f et la surface est S = %.2f \n", P,S);
 return 0;
}
