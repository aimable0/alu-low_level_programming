#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for sign and prints sign.
 * @c: the character to check
 *
 * Return: 1 if c is positve
 * and 0 if c is zero.
 * and -1 if c is negative.
 */

int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return (1);
}
else if (c == 0)
{
_putchar('0');
return (0);
}
else if (c < 0)
{
_putchar('-');
return (-1);
}

}
