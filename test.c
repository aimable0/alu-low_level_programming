#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double compute_sqrt(double x, double y);
int main(void)
{
    printf("sqrt of %lf: %lf\n", 3.0, compute_sqrt(9.0, 1.0));
}

// test double
double compute_sqrt(double x, double y)
{
    double new_y = ((x / y) + y) / 2.0;
    if (fabs(new_y - y) < 0.0001)
        return new_y;

    y = new_y;
    return compute_sqrt(x, y);
}