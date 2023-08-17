#include "main.h"
/**
 *_isdigit - checks for  digits 0 through 9
 * @c: parameter to be checked
 * Return: 1 successful 0 when failure
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
