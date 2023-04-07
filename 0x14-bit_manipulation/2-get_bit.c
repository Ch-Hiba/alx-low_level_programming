#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number to check value
 * @index: index
 * Return: value of given index or -1 if errored
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(8) * 8))
		return (-1);

	while (i < index)
	{
		n = n >> 1;
		i++;
	}

	return (n & 1);
}
