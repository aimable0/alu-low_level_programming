#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: int for which to calculate its absolute
 *
 * Return: absolute value of int n.
 */

int _abs(int n)
{
if (n < 0)
return (-1 * n);
else
return (n);
}
