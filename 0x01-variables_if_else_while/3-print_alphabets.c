#include <stdio.h>
/**
*main - This program will print english aplphabet
*
*Return: Always 0 (success)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
return (0);
}
