#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program's entry point
 * @agc: commandline argumnent count (total passed to the cmdline)
 * @argv: array of commands (strings).
 *
 * Return:
 *      98: on Error(if the number of arguments is wrong)
 *      99: on Error(if the operator is illegal)
 *      100: on Error(if the user tries to divide (/ or %) by 0)
 *      0: on Success.
 */
int main(int argc, char *argv[])
{
int (*operation)(int, int);
int operand_1;
char *operator;
int operand_2;
int result = 0;

if (argc != 4)
{
printf("Error\n");
return (98);
}

operator = argv[2];
operation = get_op_func(operator);
if (operation == NULL)
{
printf("Error\n");
return (99);
}

operand_1 = atoi(argv[1]);
operand_2 = atoi(argv[3]);
if (operand_2 == 0)
{
printf("Error\n");
return (100);
}

result = operation(operand_1, operand_2);
printf("%d\n", result);

return (0);
}
