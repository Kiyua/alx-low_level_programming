#include "main.h"
#include <stddef.h>

/**
 * set_bit - func
 *
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((size_t) index > sizeof(*n) * sizeof(long))
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
