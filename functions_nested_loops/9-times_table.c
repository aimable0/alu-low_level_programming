#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times tables
 *
 * Return: void always.
 */

void times_table(void)
{
int i, m;
for (i = 0; i < 10; i++)
{
for (m = 0; m < 10; m++)
{
if (m == 0)
{
_putchar('0');
continue;
}
if (i * m < 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((i * m) + '0');
}
else
{
int product = i * m;
int last_digit = product % 10;
int first_digit = (product - last_digit) / 10;
_putchar(',');
_putchar(' ');
_putchar(first_digit + '0');
_putchar(last_digit + '0');
}
}
_putchar('\n');
}
}
