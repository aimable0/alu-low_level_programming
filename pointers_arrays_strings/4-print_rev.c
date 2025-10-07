#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string
 * @s: variable whose string's is to be printed in reverse
 * Return: Always void
 */

void print_rev(char *s)
{
int i = -1;
int len = 10;

while (*(s + ++i) != '\0')
{
len++;
}

for (i = len; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
