#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _strcpy(char *dest, char *src)
{
    int i = 0;

    if (dest == NULL)
        return;
    if (src == NULL)
        return;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t dog;
    dog_t *new_dog = &dog;

    new_dog->age = age;
    dog.name = name;
    dog.owner = owner;

    dog.name = malloc(sizeof(char) * 10);
    if (dog.name != NULL)
        free(dog.name);

    /* _strcpy(dog.name, name); */
    /* _strcpy(dog.owner, owner); */

    return new_dog;
}
