#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int (*operation)(int, int);
    int operand_1 = atoi(argv[1]);
    char *operator = argv[2];
    int operand_2 = atoi(argv[3]);
    int result = 0;

    /* let's assume user are kind and they will comply hahah :)*/
    if (argc != 4)
    {
        print("Error\n");
        return 98;
    }

    /*! le'ts break the rule abit */
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
