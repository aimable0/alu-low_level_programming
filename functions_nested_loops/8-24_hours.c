#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void always
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