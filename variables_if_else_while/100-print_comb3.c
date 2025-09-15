#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int i, m;

    for (i = 48; i < (48 + 10); i++)
    {
        for (m = 48 + (i - 48); m < 58; m++)
        {
            if (i != m) {
                putchar(i);
                putchar(m);
            }
            if (i < 56) {
                putchar(',');
                putchar(' ');
            }

        }
    }

    return (0);
}
