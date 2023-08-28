#include "main.h"

/**
 *_strchr - locates character in a string
 *@c: character searched in s
 *@s: string to be searched
 *Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
