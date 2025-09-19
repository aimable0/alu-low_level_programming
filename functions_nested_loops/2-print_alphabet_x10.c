#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - writes the all characters to stdout 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int a = 97;
int i = 0;
int n = 0;

for (n = 0; n < 10; n++)
{
for (i = 0; i < 26; i++)
{
_putchar(a++);
}
_putchar(10);
a = 97; /* reseting back to 'a' */
}
}
