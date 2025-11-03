#include <stdlib.h>

/**
 * dog - a new type for dog representation
 */
typedef struct dog
{
    char *owner;
    float age;
    char *name;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
