#include <stdio.h>
/**
*main - This program will print the alphabet
*
*Return: Always 0 (success)
*/
int main(void)
{
int ch;
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
