#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_FAILURE 1
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL && name != NULL && owner != NULL)
{
d->name = name;
d->owner = owner;
d->age = age;
}
else
{
printf("Ok\n");
exit(EXIT_FAILURE);
}
}
