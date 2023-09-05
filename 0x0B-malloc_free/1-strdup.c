#include "main.h"

/**
 * _strdup -  copies string to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer of new memory
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int a;

	if (str == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	if (copy == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0'; a++)
		copy[a] = str[a];
	return (copy);
}
