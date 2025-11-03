#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
    if (d) free(d);
    else return;

    if (d->owner == NULL);
    else free(d->owner);

    if (d->name == NULL);
    else free(d->name);
}
