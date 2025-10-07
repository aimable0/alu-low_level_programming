#include <stdio.h>

/**
 * _strcpy - copies string.
 * @src: source string (to copy from)
 * @dest: destination (to copy to)
 * Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
int i = 0;
char temp;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i <= len; i++)
{
temp = src[i];
dest[i] = temp;
}
return (dest);
}
