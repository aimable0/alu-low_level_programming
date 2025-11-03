#include "dog.h"
#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t dog;
    int i = 0;
    dog.name = malloc(sizeof(char) * 50);
    dog.owner = malloc(sizeof(char) * 50);

    if (dog.name != NULL, name != NULL && owner != NULL, dog.owner != NULL)
    {
        dog.age = age;

        /* copy name */
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
    return &dog;
}
