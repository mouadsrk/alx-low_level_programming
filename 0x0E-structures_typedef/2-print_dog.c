#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *print_dog - function that prints a struct dog
 *@d: dog
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
	{
		return;
	}
	if (!d->name)
	{
		d->name = "(nil)";
	}
	if (!d->owner)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
