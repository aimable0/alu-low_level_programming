#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 *
 * Return: void always
 */


void jack_bauer(void)
{
int min = 0;
int hr = 0;

for (hr = 0; hr < 24; hr++) {
    for (min = 0; min < 60; min++) {

        /* handling hours */
        if (hr < 10) {
            putchar('0');
            putchar(hr + '0');
        } else {
            /* displaying hours with 2 digits */
            int last_digit = hr % 10;
            int first_digit = (hr - last_digit) / 10;
            putchar(first_digit + '0');
            putchar(last_digit + '0');
        }

        putchar(':');

        /* handling minutes */
        if (min < 10) {
            putchar('0');
            putchar(min + '0');
        } else {
            /* displaying minutes with 2 digits */
            int last_num = min % 10;
            int first_num = (min - last_num) / 10;
            putchar(first_num + '0');
            putchar(last_num + '0');
        }
        putchar('\n');
    }
}
}
