#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Programme de table de multiplication de 7*/

int main()
{
  int i, M;
  for (i=0; i <= 10; i++ ) {
   M = 7*i;
   printf ("7 * %d = %d \n", i,M);

  }
  return 0;
}