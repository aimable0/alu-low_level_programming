#include <stdio.h>

/**
 * print_name - prints a name using function pointer
 * @name: name to print on stdout
 * @f: function pointer that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
{
return;
}
f(name);
}
