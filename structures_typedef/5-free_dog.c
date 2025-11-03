#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
    if (d) free(d);
    else return;

    if (d->owner) free(d->owner);
    if (d->name) free(d->name);
}
