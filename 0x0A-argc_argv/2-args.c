#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argv: array of string stores
 * @argc: stores number of command line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
while (*argv)
{
(void) argc;
printf("%s\n", *argv);
argv++;
}
return (0);
}
