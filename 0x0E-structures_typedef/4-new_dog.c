#include "dog.h"
#include <stdlib.h>
#include <stdlib.h>
/**
 * _strdup - contains a copy of the string
 * @str: pointer to string
 * Return: null or pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int larg, olarg;

	if (str == 0)
		return (NULL);
	for (larg = 0; str[larg] != '\0'; larg++)
	{
	}
	ptr = malloc(sizeof(char) * larg + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (olarg = 0; ptr[olarg] <= larg; olarg++)
	{
		ptr[olarg] = str[olarg];
	}
	return (ptr);

}
/**
 * new_dog - creates a new dog
 * @name: new name
 * @age: new age
 * @owner: new owner
 * Return: pointer or null
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
