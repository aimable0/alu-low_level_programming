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
    int i = 0;
    /* copy */
    while (name[i] != '\0')
    {
        d->name[i] = name[i];
        i++;
    }
    d->name[i] = '\0';

    i = 0; /* reset i for a fresch copy*/
    while (owner[i] != '\0')
    {
        d->owner[i] = owner[i];
        i++;
    }
    d->owner[i] = '\0';

    d->age = age;
}
