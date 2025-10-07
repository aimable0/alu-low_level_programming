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

if (n < 1)
{
printf("\n");
return;
}

// if (n == 1)
// {
// printf("%i\n", a[i]);
// return;
// }

for (i = 0; i < n; i++)
{
if (i == n - 1)
{
printf("%i\n", a[i]);
break;
}
printf("%i, ", a[i]);
}
}
