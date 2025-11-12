#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter on each element of an array.
 * @array: an array of integers
 * @size: size of array
 * @action: action to be carried out for each element of an array.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i = 0;
    for (i = 0; i < (int) size; i++)
    {
        action(array[i]);
    }
}