#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: int for which to calculate its absolute
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
if (n < 0) /* handle negative number */
_putchar((-n % 10) + '0');
else
_putchar((n % 10) + '0');
return (n % 10);
}
