#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: measured string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit += _strlen_recursion(s + 1);
		longit++;
	}
	return (longit);
}
