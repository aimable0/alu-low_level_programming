#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


void _strcpy(char *dest, char *src);
int _strlen(char *string);


/**
 * new_dog - creates a new do
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new struct dog on success.
 *         NULL on fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

new_dog->age = age;

new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

_strcpy(new_dog->name, name);

new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}
_strcpy(new_dog->owner, owner);

return (new_dog);
}




/* ===  HELPER FUNCTIONS == */

/**
 * _strcpy - copies string from src into dest
 * @dest: where to copy into
 * @src: where to copy from
 *
 * Return: Nothing.
 */
void _strcpy(char *dest, char *src)
{
int i = 0;

if (dest == NULL)
{
return;
}
if (src == NULL)
{
return;
}

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}

/**
 * _strlen - calculates the length of a string
 * @string: string whose length is to be calculated
 *
 * Return: string length on success and 0 if string is NULL.
 */
int _strlen(char *string)
{
int i = 0;

if (string == NULL)
{
return (0);
}

while (string[i] != '\0')
{
i++;
}

return (i);
}
