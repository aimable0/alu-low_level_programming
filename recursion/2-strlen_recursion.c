#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: pointer to the first character of the string
 *
 * Return: length of a string (int) Always.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion((s + 1)));
}
