#include <stdio.h>
#include "main.h"

/**
 * _print_time - prints time in double digit format
 * @time: time in hr or time in min.
 * Return: always void
 */

void _print_time(int time)
{
if (time < 10)
{
_putchar('0');
_putchar(time + '0');
}
else
{
_putchar(((time - (time % 10)) / 10) + '0');
_putchar((time % 10) + '0');
}
}

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: always void
 */

void jack_bauer(void)
{
int hr, min;
for (hr = 0; hr < 24; hr++)
{
for (min = 0; min < 60; min++)
{
_print_time(hr);
_putchar(':');
_print_time(min);
_putchar('\n');
}
}
}
