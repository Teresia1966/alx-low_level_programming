#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes to be copied
 * @src: source location
 * @dest: destination location
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		dest[j] = src[j];
	return (dest);
}
