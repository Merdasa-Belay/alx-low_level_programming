#include <stdio.h>
/**
*main - This program will print numbers
*
*Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar((i % 10) + '0');
putchar('\n');
return (0);
}
