#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*fonction - variables locales*/

void signe(int A,int B)
{
  if(A*B>0)  {
   printf("A et B ont le même signe \n");
  }
  else {
   printf ("A est B sont de signe different \n");
}
}
int maximun(int A, int B) 
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

int minimum(int A, int B)
{
  int min;
  if(A>B) {
  min = B; }
  else {min = A;
  return min;}

}
int main()
{
  int A,B;
  int min,max;
  printf("Veuillez saisir la valeur de A: ");
  scanf("%d", &A);
  printf("Veuillez saisir la valeur de B: ");
  scanf("%d", &B);
  signe(A,B);
  max = maximun(A,B);
  min = minimum(A,B);
  printf("la valeur maximal est %d \n", max);
  printf("la valeur minimal est %d \n", min);
  return 0;
}

