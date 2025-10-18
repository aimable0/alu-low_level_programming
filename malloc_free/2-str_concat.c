#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concates two string
 * @s1: string to copy
 * @s1: string to copy
 *
 * Return: character array (new copy of str in memory) always
 */

char *str_concat(char *s1, char *s2)
{
    int i = 0;
    char *concat;
    int len_s1 = 0;
    int len_s2 = 0;

    if (s1 == NULL || s2 == NULL) /* not very effecient logic */
    {
        return (NULL);
    }

    while(s1[i] != '\0')
    {
        i++;
        ++len_s1;
    }

    i = 0;
    while(s2[i] != '\0')
    {
        i++;
        ++len_s2;
    }
    ++len_s2;

    concat = malloc(sizeof(char) * (len_s1 + len_s2));

    /* check */
    if (concat == NULL)
    {
        return NULL;
    }

    for (i = 0; i < len_s1; i++)
    {
        concat[i] = s1[i];
    }

    for (i = len_s1; i < (len_s1 + len_s2); i++)
    {
        concat[i] = s2[i];
    }
    concat[len_s1 + len_s2] = '\0';

    return concat;
}
