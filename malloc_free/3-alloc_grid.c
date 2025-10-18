#include <stdio.h>
#include <stdlib.h>



/**
 * initialize_array - initializes 2D-Array's element with zero
 * @arr: two dimensional array
 * @width: cols
 * @height: rows
 *
 * Returns void Always
 */
void initialize_array(int **arr, int width, int height)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            arr[i][j] = 0;
        }
    }
}

/**
 * alloc-grid - creates a 2D Array
 * @width: cols
 * @height: rows
 *
 * Returns pointer to a 2-Dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
    int i = 0;
    int **arr;

    if (width < 1)
        return (NULL);
    if (height < 1)
        return (NULL);

    arr = malloc(sizeof(int *) * height);
    if (arr == NULL)
    {
        return (NULL);
    }

    // create cols
    for (i = 0; i < height; i++)
    {
        arr[i] = malloc(sizeof(int) * width);
        if (arr[i] == NULL)
        {
            return (NULL);
        }
    }

    initialize_array(arr, width, height);
    return arr;
}