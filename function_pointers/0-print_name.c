#include <stdio.h>

/**
 * print_name - prints a name using function pointer
 * @name: name to print on screen
 * @f: function pointer
 * 
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}
