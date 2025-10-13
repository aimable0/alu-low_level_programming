#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to the first character of the string
 *
 * Return: Void Always.
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
putchar(*s);
}
}
