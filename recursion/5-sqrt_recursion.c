#include <stdio.h>

int _sqrt_recursion(int n);
int _has_natural_sqrt(int n, int i);
double compute_sqrt(double x, double y);

/**
 * _has_natural_sqrt - checks if a number has a natural sqrt
 * @n: number to check for
 * @i: recursion changing parameter
 *
 * Returns 1 if n has natural sqrt and 0 otherwise.
 */

int _has_natural_sqrt(int n, int i)
{
    if (i * i > n)
        return -1;
    if (i * i == n)
        return 1;
    return _has_natural_sqrt(n, ++i);
}

/**
 * compute_sqrt - computes sqrt of x using newtons method
 * @x: floating point number
 * @y: initial guess
 *
 * Returns double natural sqrt of x
 */
double compute_sqrt(double x, double y)
{
    double new_y = ((x / y) + y) / 2.0;
    if (fabs(new_y - y) < 0.0001)
        return new_y;

    y = new_y;
    return compute_sqrt(x, y);
}

/**
 * compute_sqrt - computes sqrt of x using newtons method
 * @n: floating point number
 *
 * Returns (int) natural sqrt of n nad -1 if number has no natural sqrt.
 */
int _sqrt_recursion(int n)
{
    if (_has_natural_sqrt == -1)
        return -1;
    return (int)compute_sqrt((double)n, 1.0);
}
