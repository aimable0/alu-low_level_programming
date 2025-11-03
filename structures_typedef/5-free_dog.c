#include "dog.h"
#include <stdio.h>

void free_dog(dog_t *d)
{
    free(d);
    free(d->owner);
    free(d->name);
}