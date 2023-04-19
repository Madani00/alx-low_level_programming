#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - a function that creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL or my_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t = *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
