#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with specif char
 * @c: letter to initalize with
 * @size: size of array
 * Return: character array always
 */
char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *arr = malloc(sizeof(char) * size);

if (size == 0 || arr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
arr[i] = c;
}

return (arr);
}
