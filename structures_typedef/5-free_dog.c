#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
    if (d) free(d);
    else return;

    if (d->name) free(d->name);
    if (d->owner != NULL) free(d->owner);
}
