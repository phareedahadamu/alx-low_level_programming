#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - A function that calculates the length of a string
 * @str: The string
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int i = 0, len = 0;

	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

/**
 * _strcpy - A function that copies the content of a string to another
 * @str1: The sorce string
 * @str2: The destination string
 * Return: The destination string
 */
char *_strcpy(char *str1, char *str2)
{
	int i;
	int len = _strlen(str1);

	for (i = 0; i < len; i++)
		str2[i] = str1[i];
	str2[i] = '\0';

	return (str2);
}

/**
 * new_dog - A function that creates a new dog
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dogs owner
 * Return: Null if it fails, pointer to the new dog on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(name, dog->name);
	dog->age = age;
	_strcpy(owner, dog->owner);

	return (dog);
}
