#include "main.h"
/**
*_islower - checks if the character is lowercase
*
*Return: returns 1 if c is lowercase and 0 otherwise
*Returns 1 if c is lowercase
*/
int _islower(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
