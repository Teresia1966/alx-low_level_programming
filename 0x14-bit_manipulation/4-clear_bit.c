#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the changed number
 * @index: index of the bit to clear
 * Return: 1 when successful -1 when failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

