#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of bit
 * Return: 1 if successful, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	a = 1;
	a = a << index;

	if (n == NULL || index > sizeof(unsigned long int) * 8)
		return (-1);

	if (((*n >> index) & 1) == 1)
		*n = a ^ *n;

	return (1);
}
