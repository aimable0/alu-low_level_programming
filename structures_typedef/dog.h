
/**
 * dog - a new type for dog representation
 */
struct dog
{
    char *owner;
    char *name;
    float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
