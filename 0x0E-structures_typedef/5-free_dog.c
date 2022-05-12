#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: pointer to structure
 */
void free_dog(dog_t *d)
{
	dog_t **p  = &d;

	free((**p).name);
	free((**p).owner);
	free(p);
}
