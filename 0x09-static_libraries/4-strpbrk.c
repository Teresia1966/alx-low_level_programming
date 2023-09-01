#include "main.h"

/**
 * _strpbrk - searches a string of any set of bytes
 * @accept: set of bytes to be searched
 * @s: string to be searched
 * Return: a pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
