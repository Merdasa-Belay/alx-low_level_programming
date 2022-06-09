#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/
void positive_or_negative(int i)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
int main(void)
{
int i;
i = 0;
positive_or_negative(i);
return (0);
}
