#include <unistd.h>
void my_putchar(char c);

void my_print_alpha(void)
{
   char a =97;
   int i;

   for(i=0; i < 26; i++)

{
   my_putchar(a);
   a=a+1;
}
   my_putchar('\n');
}


