#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with specif char
 * @c: letter to initalize with
 *
 * Return: character array always
 */
char *create_array(unsigned int size, char c)
{
    int i = 0;
    if (size == 0)
    {
        return (NULL);
    }

    char *arr = malloc(sizeof(char) * size);
    if (arr == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return arr;
}