#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer 
 * 
 */
void print_number(void)
{
  int i;
if(i/10!=0)
{
print_number(i/10);
if ( i > 0 )
{
_putchar(i%10 + '0');
}
else
{
_putchar(-i%10 + '0');
}
}
else if((i/10==0) && (i%10!=0) && (i>0))
{
_putchar(i%10 + '0');
}
else if((i/10==0) && (i%10!=0) && (i<=0))
{
_putchar('-');
_putchar(-i%10+'0');
}    
}
