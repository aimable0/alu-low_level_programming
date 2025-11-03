#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_FAILURE 1
/**
 * init_dog - initializes a variable of type struct dog
 *!params here..
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
    if (d != NULL)
    {
        printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
        printf("Age: %f\n", (d->age));
        printf("Onwer: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
    }
}
