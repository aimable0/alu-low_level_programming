#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_FAILURE 1
/**
 * print_dog - prints the details of a struct dog.
 * @d: pointer to a struct dog.
 *
 * Description: Prins the name, age, and owner of the dog.
 *              if name or owner is NULL, prints (nil).
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
printf("Age: %f\n", (d->age));
printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
}
