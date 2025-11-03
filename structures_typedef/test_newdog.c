#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t dog;
    dog_t *new_dog = &dog;
    int i = 0;

    /* allocate memory for name */
    while (name[i] != '\0')
        i++;
    new_dog->name = malloc(sizeof(char) * i);

    /* allocate memory for owner */
    i = 0;
    while (owner[i] != '\0')
        i++;
    new_dog->owner = malloc(sizeof(char) * i);

    /* check for non NULL*/
    if (new_dog->name != NULL && new_dog->owner != NULL)
    {
        new_dog->age = age;

        /* copy name */
        i = 0;
        while (name[i] != '\0')
        {
            new_dog->name[i] = name[i];
            i++;
        }
        new_dog->name[i] = '\0';

        /* copy owner & reset i */
        i = 0;
        while (owner[i] != '\0')
        {
            new_dog->owner[i] = owner[i];
            i++;
        }
        new_dog->owner[i] = '\0';
    }
    else
    {
        free(new_dog->name);
        free(new_dog->owner);
        return NULL;
    }

    return new_dog;
}


    // dog.owner = malloc(sizeof(char) * 50);
    // if (dog.owner == NULL)
    // {
    //     free(dog.name);
    //     free(dog.owner);
    //     return NULL;
    // }