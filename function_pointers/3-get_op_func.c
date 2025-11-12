#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 *               to perform the operation asked by the user.
 *               You’re not allowed to declare any other function.
 * @s: the operator passed as argument to the program
 *
 * Return:  on Success pointer to the function op_add
 *          on Error NULL
 */
int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}};

while (i < 5)
{
if (strcmp(ops[i].op, s) == 0)
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
