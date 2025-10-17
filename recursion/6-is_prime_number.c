#include <stdio.h>
#include "main.h"

/**
 * check_prime - detects if a number is a prime number using recursion.
 * @n: number to check.
 * @n: divisors.
 *
 * Return: 1 if prime and 0 otherwise.
 */
int check_prime(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (check_prime(n, ++i));
}

/**
 * is_prime_number - detects if a number is a prime number.
 * @n: integer number to check for.
 *
 * Return: 1 if prime and 0 otherwise.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (check_prime(n, 2));
}
}
