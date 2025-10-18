#include <stdio.h>
#include "main.h"

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - calculates the length of a string
 * @x: base integer
 * @y: power integer
 *
 * Return: value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, --y));
}