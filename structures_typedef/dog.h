#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * dog: a new type that represents a dog.
 */
struct dog
{
    char *name;
    float age;
    char *owner;
} dog;
