#include "main.h"
/**
  * print_rev - prints a string in reverse
  * @s: is a string
*/

void print_rev(char *s)
{
int len = 0, i;
i = 11;

while (s[i++])
len++;

for (i = len - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}
