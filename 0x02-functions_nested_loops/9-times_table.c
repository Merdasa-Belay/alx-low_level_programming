#include "main.h"
/**
 * times_table - rints the 9 times table, starting with 0
 *
 * Return: the last digits
 */
 void times_table(void)
 {
 int i, j;
 for (i = 0;i <= 9;i++)
 {
 for (j = 0;j <= 9;j++)
 {
 int n;
 n = i * j;
 _putchar("%d%", n)
 }
 _putchar("\n");
 }
 }
