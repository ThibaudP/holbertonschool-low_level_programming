#include "dog.h"

/**
 * _strlen  - Returns the length of a string s
 *
 * @s: pointer to a string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * new_dog - Creates a struct dog
 *
 * @d: pointer to struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	int name_len, owner_len, i;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog_new->name = malloc(sizeof(char) * name_len);
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		dog_new->name[i] = name[i];

	dog_new->age = age;

	dog_new->owner = malloc(sizeof(char) * owner_len);
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	for (i = 0; i < owner_len; i++)
		dog_new->owner[i] = owner[i];

	return (dog_new);
}
