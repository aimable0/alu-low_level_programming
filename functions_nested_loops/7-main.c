#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    // print_last_digit(98);
    // print_last_digit(0);

    r = print_last_digit(-2147483648);
    printf("last int: %d\n", r);
    // _putchar('0' + r);
    // _putchar('\n');
    return (0);
}