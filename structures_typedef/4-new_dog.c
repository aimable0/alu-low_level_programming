#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t dog;
    dog_t *new_dog = &dog;
    int i = 0;

    /* allocate memory */
    while (name[i] != '\0')
        i++;
    dog.name = malloc(sizeof(char) * i);

    while (name[i] != '\0')
        i++;
    dog.owner = malloc(sizeof(char) * i);

    if (dog.name != NULL && name != NULL && owner != NULL && dog.owner != NULL)
    {
        dog.age = age;

        /* copy name */
        i = 0;
        while (name[i] != '\0')
        {
            dog.name[i] = name[i];
            i++;
        }
        dog.name[i] = '\0';

        /* copy owner & reset i */
        i = 0;
        while (owner[i] != '\0')
        {
            dog.owner[i] = owner[i];
            i++;
        }
        dog.owner[i] = '\0';
    }
    else
    {
        free(dog.name);
        free(dog.owner);
        return NULL;
    }

    return new_dog;
}
