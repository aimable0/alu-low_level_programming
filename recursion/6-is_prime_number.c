#include <stdio.h>
#include <math.h>
#include "main.h"

int is_prime_number(int n)
{
int i = 0;
int limit = (int)sqrt((double)n);

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

for (i = 3; i <= limit; i += 2)
{
if (n % i == 0)
{
return (0);
}
}
return 1;
}