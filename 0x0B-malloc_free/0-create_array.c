#include "main.h"

/**
 * create_array - creates array of chars
 * @c: character to store arrays
 * @size: size of arrays
 * Return: pointer of arrays
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		arr[a] = c;
	return (arr);

}

