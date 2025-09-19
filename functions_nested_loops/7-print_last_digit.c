#include <stdio.h>
#include "main.h"

#define INT_MIN   (-2147483647 - 1)
/**
 * print_last_digit - prints the last digit of a number.
 * @n: int for which to calculate its absolute
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
if (n < 0)
{
_putchar(-(n % 10) + '0');
return (-(n % 10));
}
else
{
_putchar((n % 10) + '0');
return (n % 10);
}
}
