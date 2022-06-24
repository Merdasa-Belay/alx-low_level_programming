#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argv: array of string stores
 * @argc: stores number of command line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
