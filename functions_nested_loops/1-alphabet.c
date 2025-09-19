#include <stdio.h>
#include "main.h"

#define LENGTH 9
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int a = 97;
int i = 0;
for (i = 0; i < 26; i++)
{
_putchar(a++);
}
_putchar(10);
}