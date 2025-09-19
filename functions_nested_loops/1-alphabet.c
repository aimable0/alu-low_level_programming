#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - writes the all characters to stdout
 *
 * Return: void
 */

void print_alphabet(void)
{
int a = 97;
int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(a++);
}
_putchar(10);
}
