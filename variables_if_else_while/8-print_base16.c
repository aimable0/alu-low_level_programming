#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 48; i < (48 + 10); i++)
{
putchar(i);
}

for (i = 97; i < (97 + 6); i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
