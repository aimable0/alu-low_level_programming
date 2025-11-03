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
    dog_t dog;
    dog_t *new_dog = &dog;

    new_dog->age = age;
    dog.name = name;

    dog.name = malloc(sizeof(char) * _strlen(name));
    if (dog.name == NULL)
    {
        return NULL;
    }
    
    if (name == NULL)
    {
        free(dog.name);
    }
    else
    {
        _strcpy(dog.name, name);
    }

    dog.owner = malloc(sizeof(char) * _strlen(owner));
    if (dog.owner == NULL)
    {
        free(dog.name);
        return NULL;
    }

    if (name == NULL)
    {
        free(dog.name);
        return NULL;
    }
    _strcpy(dog.owner, owner);

    return new_dog;
}
