#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 *!params here..
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    strcpy(d->name, name);
    d->age = age;
    strcpy(d->owner, owner);
}
