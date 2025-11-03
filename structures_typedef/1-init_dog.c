#include "dog.h"
#include <stdio.h>
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 *!params here..
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->name = name;
    d->owner = owner;
    d->age = age;
}
