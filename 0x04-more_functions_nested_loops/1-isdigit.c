#include "main.h"
/**
 * isdigit - checks for  digits 0 through 9
 * @c: parameter to be checked
 * Return: 1 successful 0 when failure
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
