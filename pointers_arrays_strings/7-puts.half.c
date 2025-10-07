#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: Always void
 */

void puts_half(char *str)
{
int len = 0;
int i = 0;

while (str[len] != '\0')
{
len++;
}

i = (len % 2 == 0) ? len / 2 : (len - 1) / 2;
for (; i < len ; i++)
{
putchar(str[i]);
}
putchar('\n');
}
