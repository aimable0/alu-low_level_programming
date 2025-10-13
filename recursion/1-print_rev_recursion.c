#include <stdio.h>
//!\ #include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to the first character of the string
 *
 * Return: Void Always.
 */

void _print_rev_recursion(char *s);

int main(void)
{
    _print_rev_recursion("\nColton Walker");

    return 0;
}

void _print_rev_recursion(char *s)
{
    // le'ts try to manually get at the end of the string

    int i = 0;
    while (*(s + i) != '\0')
        i++;

    putchar(*s);
    _print_rev_recursion(s + (i  - 1));
    return;
}
