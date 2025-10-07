#include <stdio.h>

/**
 * _strcpy - prints second half of a string
 * @src: source string (to copy from)
 * @dest: destination (to copy to)
 * Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
char temp;

while (src[len] != '\0')
{
len++;
}

for(int i = 0; i <= len; i++)
{
temp = src[i];
dest[i] = temp;
}
return dest;
}
