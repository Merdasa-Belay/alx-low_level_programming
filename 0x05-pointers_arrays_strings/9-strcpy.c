#include "main.h"

/**
  * _strcpy - copies the string pointed to by src
  * @dest: - is a pointer
  * @src: - is a pointer
  * Return: dest 
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}

return (dest);
}
