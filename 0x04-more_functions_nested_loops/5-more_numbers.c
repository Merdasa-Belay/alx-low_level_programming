#include "main.h"
/**
 * more_numbers - prints 10 times the number for 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)

{
int a, b;

for (a = 0; a <= 9 ; a++)
	{
	for (b = 0; b <= 14 ; b++)
	{
	_putchar(b / 10 + '0');

	_putchar(b % 10 + '0');
	}

	_putchar('\n');
	}
}
