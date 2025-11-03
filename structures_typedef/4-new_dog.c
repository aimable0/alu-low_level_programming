#include "dog.h"
#include <stdlib.h>

void _strcpy(char *dest, char *src)
{
    int i = 0;

    if (!dest || !src)
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

    if (!string)
        return 0;

    while (string[i] != '\0')
        i++;

    return i;   /* standard strlen */
}

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    int name_len, owner_len;

    if (!name || !owner)
        return NULL;

    new_dog = malloc(sizeof(dog_t));
    if (!new_dog)
        return NULL;

    name_len = _strlen(name);
    owner_len = _strlen(owner);

    new_dog->name = malloc(name_len + 1);
    if (!new_dog->name)
    {
        free(new_dog);
        return NULL;
    }
    _strcpy(new_dog->name, name);

    new_dog->owner = malloc(owner_len + 1);
    if (!new_dog->owner)
    {
        free(new_dog->name);
        free(new_dog);
        return NULL;
    }
    _strcpy(new_dog->owner, owner);

    new_dog->age = age;

    return new_dog;
}
