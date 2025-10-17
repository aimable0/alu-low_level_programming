#include <stdio.h>
#include <math.h>

int is_prime_number(int n);
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);

    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }

    int i = 0;
    int limit = (int)sqrt((double)n);
    for (i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
        {
            return (0);
        }
    }
    return 1;
}