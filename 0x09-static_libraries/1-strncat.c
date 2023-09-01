#include "main.h"

/**
 * _strncat - conctenates two strings
 * @n: number of byte to concenates
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
