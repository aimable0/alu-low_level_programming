#include <stdio.h>
#include "main.h"

int _pow_recursion(int x, int y);

/**
 * _pow_recursion - calculates the length of a string
 * @x: base integer
 * @y: power integer
 *
 * Return: value of x raised to the power of y.
 */

int main(void)
{
    int x = 2;
    int y = 2;
    int ans = _pow_recursion(x, y);
    printf("pow: %d\n", ans);
}

int _pow_recursion(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else if (y == 1)
    {
        return x;
    }

    return 1 + _pow_recursion(x, --y);
}