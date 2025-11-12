#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: array that contains integers
 * @size: length of the array
 * @cmp: pointer to a function that confirms if the integer is found
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
{
return (-1);
}

if (array == NULL)
{
return (-1);
}

if (cmp == NULL)
{
return (-1);
}

for (; i < size; i++)
{
if (cmp(array[i]) != 0) {
return i;
};
}
return (-1);
}
