#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Ghost", 4.75, "Jon Snow");

    printf("My name is %s, and I am %.1f :) with my owner %s - Woof!\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}

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

    dog.name = malloc(sizeof(char) * 50);
    if (dog.name == NULL)
    {
        free(dog.name);
        return NULL;
    }

    _strcpy(dog.name, name);

    // dog.owner = malloc(sizeof(char) * 50);
    // if (dog.owner == NULL)
    // {
    //     free(dog.name);
    //     free(dog.owner);
    //     return NULL;
    // }

    _strcpy(dog.owner, owner);

    return new_dog;
}
