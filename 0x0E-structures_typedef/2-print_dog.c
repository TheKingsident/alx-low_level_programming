#include "dog.h"
#include <stdio.h>

/**
 * print_dog - This function prints info of struct dog
 *
 * @d: The pointer to the dog
 **/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)"); }
}
