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

int _strlen(char *string)
{
    int i = 0;

    if (string == NULL)
        return 0;

    while (string[i] != '\0')
        i++;

    return i;
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return NULL;

    if (name == NULL)
    {
        free(new_dog);
        return NULL;
    }
    if (owner == NULL)
    {
        free(new_dog);
        return NULL;
    }

    new_dog->age = age;

    new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
    if (new_dog->name == NULL)
    {
        free(new_dog);
        return NULL;
    }

    _strcpy(new_dog->name, name);

    new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
    if (new_dog->owner == NULL)
    {
        free(new_dog);
        free(new_dog->name);
        return NULL;
    }
    _strcpy(new_dog->owner, owner);

    return new_dog;
}
