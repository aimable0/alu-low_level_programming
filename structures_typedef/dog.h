#include <stdlib.h>

/**
 * dog - a new type for dog representation
 */
typedef struct dog
{
    char *owner;
    char *name;
    float age;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
