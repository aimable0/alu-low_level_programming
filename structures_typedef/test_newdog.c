#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Ghost", 4.75, "Jon Snow");

    printf("My name is %s, and I am %.1f :) with my owner %s - Woof!\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}


    // dog.owner = malloc(sizeof(char) * 50);
    // if (dog.owner == NULL)
    // {
    //     free(dog.name);
    //     free(dog.owner);
    //     return NULL;
    // }

    //     dog.name = malloc(sizeof(char) * 50);
    // if (dog.name == NULL)
    // {
    //     free(dog.name);
    //     return NULL;
    // }