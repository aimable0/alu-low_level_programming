#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;
    int m;
    for (i = 48; i < (48 + 10); i++)
    {
        for (m = 48 - (48 - i); m < 58; m++)
        {
            putchar(i);
            putchar(m);
            putchar(',');
            putchar(' ');
        }
    }

    return (0);
}
