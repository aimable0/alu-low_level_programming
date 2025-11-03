/**
 * dog - a new type for dog representation
 */
typedef struct dog
{
    char *owner;
    char *name;
    float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
