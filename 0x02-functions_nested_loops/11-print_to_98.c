#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
_putchar("%d, ", n--);
_putchar("\n");
}
}
else
{
while (n < 98)
{
_putchar("%d, ", n++);
}
_putchar("\n");
}
}

