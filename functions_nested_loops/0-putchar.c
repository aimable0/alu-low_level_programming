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
char string[LENGTH] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
int i = 0;

for (i = 0; i < LENGTH; i++)
{
_putchar(string[i]);
}
return (0);
}
