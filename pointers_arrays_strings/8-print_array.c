#include <stdio.h>

/**
 *print_array - prints second half of a string
 * @a: array of integers
 * @n: number of integers to print
 * Return: Always void
 */

void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n - 1; i++)
{
printf("%i, ", a[i]);
}
printf("%i\n", a[n]);
}
