

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
char temp;
int end;
int i = 0;

while (s[len] != '\0') len++;

for (i = 0, len -= 1; i < (len + 1) / 2; i++) {
temp = s[i];
s[i] = s[len - i];
s[len - i] = temp;
}
}
