#include "main.h"

/**
  * _strcpy - copies the string pointed to by src
  * @dest: - is a pointer
  * @src: - is a pointer
  * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int index = 0;

while (src[index])
{
dest[index] = src[index];
index++;
}

return (dest);
}
