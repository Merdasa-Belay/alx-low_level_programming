#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argv: array of string stores
 * @argc: stores number of command line
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int m = 0;
if (argc == 3)
{
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
else
{
printf("Error\n");
}
return (1);
}

