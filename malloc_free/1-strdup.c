#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - creates an array of chars and copy a string into it
 * @str: string to copy
 *
 * Return: character array (new copy of str in memory) always
 */
char *_strdup(char *str)
{
int i = 0;
int len = 0;
char *str_cpy;

if (str == NULL)
{
return (NULL);
}

/* calculate length */
while (str[i] != '\0')
{
++i;
++len;
}
len += 1; /* for the null terminator */

str_cpy = malloc(sizeof(char) * len);

if (str_cpy == NULL)
{
return (NULL);
}

/* copy */
for (i = 0; i <= len; i++)
{
str_cpy[i] = str[i];
}

return (str_cpy);
}
