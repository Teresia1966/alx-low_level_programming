#include "main.h"

/**
 *_strchr - locates character in a string
 *@c: character searched in s
 *@s: string to be searched
 *Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s);
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
