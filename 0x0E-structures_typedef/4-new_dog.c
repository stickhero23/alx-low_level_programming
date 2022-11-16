#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - copies struct dog.
 * @name: first element of dog_t struct
 * @age: second element
 * @owner: third element of struct
 * Return: returns NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog this_dog;
	int i, j, k;
	char *m, *n;

	this_dog = malloc(sizeof(struct dog));
	if (this_dog == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	m = malloc(sizeof(char) * i + 1);
	if (m == NULL)
	{
		free(this_dog);
		return (NULL);
	}
	n = malloc(sizeof(char) * j + 1);
	if (n == NULL)
	{
		free(n);
		free(this_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		m[k] = name[k];
	for (k = 0; k <= ; k++)
		n[k] = owner[k];


	this_dog->name = m;
	this_dog->age = age;
	this_doge->owner = n;

	return (this_dog);
}
