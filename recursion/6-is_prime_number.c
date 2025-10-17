#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - detects if a number is a prime number.
 * @n: integer number to check for.
 *
 * Return: 1 if prime and 0 otherwise.
 */


int is_prime_number(int n)
{
    if (n <= 1)
        return 0;

    for (int i = 0; i < n; i++)
    {
        if (i != 1 && i != n && n % i == 0)
            return 0;
    }
    return 1;
}