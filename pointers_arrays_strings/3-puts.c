#include <stdio.h>

/**
 * _puts - prints a string
 * @s: variable whose string's is to be printed on stdout
 * Return: Always void
 */
void _puts(char *s)
{
int i = -1;
while (*(s + ++i) != '\0')
{
putchar(s[i]);
}
putchar('\n');
}
