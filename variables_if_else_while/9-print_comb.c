#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for(i = 48; i < (48 + 10); i++)
{
putchar(i);
if ( i != 48 + 9)
{
putchar(',');
}
putchar(' ');
}

return (0);
}
