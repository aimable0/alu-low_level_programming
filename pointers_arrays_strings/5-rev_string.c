

#include <stdio.h>
#include "main.h"

/**
 * rev_string - prints a string
 * @s: variable whose string's is to be printed in reverse
 * Return: Always void
 */

void rev_string(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}

while (len > 0)
{
_putchar(s[--len]);
}
_putchar('\n');
}
