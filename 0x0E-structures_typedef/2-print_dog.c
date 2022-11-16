#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog.
 * @d: struct name pointer
 * Return: Always 0, success
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d->name == NULL) ? printf("Name: (nil)\n")
		: printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n")
		: printf("Owner: %s\n", d->owner);

}
