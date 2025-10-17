#include <stdio.h>
#include "main.h"

/* Helper funciton */
int check_prime(int n, int i)
{
    if (i != n && n % i == 0)
        return 0;

    if (i == n)
        return 1;
    else
        return check_prime(n, i++);
}

/**
 * is_prime_number - detects if a number is a prime number.
 * @n: integer number to check for.
 *
 * Return: 1 if prime and 0 otherwise.
 */

int is_prime_number(int n)
{
    int i = 0;
    if (n <= 1)
        return (0);
    if (n == 2)
        return (1);
    else
        return check_prime(n, 2);
}
