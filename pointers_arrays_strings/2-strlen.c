#include <stdio.h>

/**
 * _strlen - calculates the length of a string
 * @s: variable whose string's length is to be calculated
 * Return: Always length (int) and 1 (on fail)
 */
int _strlen(char *s)
{
    int i = 0;
    int len = 0;
    while(*(s + i) != '\n')
        len++;
    return len;
}
