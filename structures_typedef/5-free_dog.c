#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
    if (d)
        free(d);
    else
        return;
    free(d->name);
    free(d->owner);
}
