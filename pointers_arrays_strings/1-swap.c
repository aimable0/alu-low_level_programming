#include <stdio.h>

/**
 * swap_int - swaps variables values
 * @b: variable whose value is to be swaped with a's
 * @a: variable whose value is to be swaped with b's
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
