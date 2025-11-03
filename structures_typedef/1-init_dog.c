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
    d->name = malloc(sizeof(char) * 50);
    d->owner = malloc(sizeof(char) * 50);
    if (d->name == NULL)
    {
        printf("No memory allocated\n");
        return;
    }
    if (d->owner == NULL)
    {
        printf("No memory allocated\n");
        return;
    }
    
    strcpy(d->name, name);
    strcpy(d->owner, owner);
    d->age = age;
}
