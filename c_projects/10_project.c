#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int A,B;
void declare()
{
printf("Veuillez saisir la valeur de A: ");
scanf("%d", &A);
printf("Veuillez saisir la valeur de B: ");
scanf("%d", &B);
}

void signe()
{
  if(A*B>0)  {
  printf("A et B ont le même signe \n");
  }
  else {
  printf ("A est B sont de signe different \n");
}
}
int maximun() 
{
  int max;
  if(A>B) {
  max = A;
   }
  else {
  max = B;
}
return max;
}
int minimum()
{
  int min;
  if(A>B) {
  min = B; }
  else  { 
    min = A;
  }
  return min; 
}



int main()
{
  declare(A,B);
  int min,max;
  signe(A,B);
  max = maximun(A,B);
  min = minimum(A,B);
  printf("la valeur maximal est %d \n", max);
  printf("la valeur minimal est %d \n", min);
  return 0;
}

