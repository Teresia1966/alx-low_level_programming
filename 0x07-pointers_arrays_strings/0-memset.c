#include "main.h"

/**
 * _memset - fills empty with a constant byte
 * @n: number of bytes
 * @b: constant byte
 * @s: area to fill with bytes
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0 ; j < n ; j++)
		s[j] = b;
	return (s);
}
