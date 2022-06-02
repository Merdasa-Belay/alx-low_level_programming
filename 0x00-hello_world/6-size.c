#include <stdio.h>
#include <float.h>
/**
* main - prints the size of various types on the computer
*
*Return: Always 0 (success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("Size of a char: %zu byte\n", sizeof(charType));
printf("Size of an int: %zu bytes\n", sizeof(intType));
printf("Size of a long int: %zu bytes\n", sizeof(long));
printf("Size of a long long int: %zu bytes\n", sizeof(long long));
printf("Size of a float: %zu bytes\n", sizeof(floatType));
return (0);
}
