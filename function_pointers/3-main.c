#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

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
        return 98;
    }

    operand_1 = atoi(argv[1]);
    operand_2 = atoi(argv[3]);
    operator = argv[2];

    operation = get_op_func(operator);
    if (operation == NULL)
    {
        printf("Error\n");
        return 99;
    }
    result = operation(operand_1, operand_2);
    printf("%d\n", result);

    return (0);
}
