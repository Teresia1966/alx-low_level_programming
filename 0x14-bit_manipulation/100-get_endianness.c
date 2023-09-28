#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *z = (char *) &y;

	return (*z);
}

