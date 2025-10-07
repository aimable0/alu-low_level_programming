#include <stdio.h>
#include <unistd.h>
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

for (i = (len % 2 == 0) ? len / 2 : (len - 1) / 2; i < len ; i++)
{
write(1, str[i], 1);
}
write(1, '\n', 1);
}
