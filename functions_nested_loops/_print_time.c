#include <stdio.h>
#include "main.h"

/**
 * _print_time - prints time (hr and min) in nice double digit format
 * @time: time to print (it can be hr or min)
 *
 * Return: void
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
