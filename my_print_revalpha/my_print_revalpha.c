#include <unistd.h>



void my_putchar(char c);

void my_print_revalpha(void)
{
  char z = 122;
  int i;

  for(i=0; i < 26; ++i)
{
   my_putchar(z);
   z=z-1;
}

}

