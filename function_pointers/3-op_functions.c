#include <stdio.h>

/**
 * op_add - function that adds two int
 * @a: operand
 * @b: operand
 *
 * Return: sum of a and b;
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - function that substract b from a.
 * @a: operand
 * @b: operand
 *
 * Return: the difference between a and b;
 */
int op_sub(int a, int b)
{
return (a  - b);
}

/**
 * op_mul - function that product of two int.
 * @a: operand
 * @b: operand
 *
 * Return: product of a and b;
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - function that calcuclates the remainder of two int.
 * @a: operand
 * @b: operand
 *
 * Return: the division of a by b;
 *
 */
int op_div(int a, int b)
{
return (a / b);
}

/**
 * op_mod - function that calculates the remainder of two int.
 * @a: operand
 * @b: operand
 *
 * Return: on success the remainder of b into a;
 *
 */
int op_mod(int a, int b)
{
return (a % b);
}
