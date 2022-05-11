#include "dog.h"
#include <stdlib.h>
/**
 * new_dog  -  creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer  to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nsize, osize, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog  == NULL)
		return (NULL);
	for (nsize = 0; name[nsize] != '\0'; nsize++)
		;
	nsize++;
	dog->name = malloc(nsize  * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i  < nsize; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (osize = 0; owner[osize] != '\0'; osize++)
		;
	osize++;
	dog->owner = malloc(osize * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < osize; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
