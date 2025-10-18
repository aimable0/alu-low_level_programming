#include <stdio.h>
#include <stdlib.h>

/**
 * concat_strings - concatinates two string into one new string
 * @s1: string
 * @s2: string
 * @len_s1: length of string 1
 * @len_s2: length of string 2
 * @concat: memory storing concatinated string
 *
 * Return: character array always
 */
char *concat_strings(char *concat, char *s1, char *s2, int len_s1, int len_s2)
{
int i = 0;
int j = 0;

/* check */
if (concat == NULL)
{
return (NULL);
}

for (i = 0; i < len_s1; i++)
{
concat[i] = s1[i];
}

for (i = len_s1; i < (len_s1 + len_s2); i++, j++)
{
concat[i] = s2[j];
}

concat[len_s1 + len_s2] = '\0';
return (concat);
}

/**
 * str_concat - concates two string
 * @s1: string
 * @s2: string
 *
 * Return: character array (new copy of str in memory) always
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;
char *concat;
int len_s1 = 0;
int len_s2 = 0;

if (s1 != NULL) /* not very effecient logic */
{
while (s1[i] != '\0')
{
i++;
++len_s1;
}
}

if (s2 != NULL) /* not very effecient logic */
{
i = 0;
while (s2[i] != '\0')
{
i++;
++len_s2;
}
++len_s2;
}

/* create a new memory block */
concat = malloc(sizeof(char) * (len_s1 + len_s2));
concat = concat_strings(concat, s1, s2, len_s1, len_s2);
return (concat);
}
