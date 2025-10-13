#include <stdio.h>
#include "main.h"

/**
 * factorial - calculates the length of a string
 * @n: integer number
 *
 * Return: factorial of n (int) Always.
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
