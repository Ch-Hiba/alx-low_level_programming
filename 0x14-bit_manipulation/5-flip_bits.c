#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: number of bits needed to complete flipping
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	unsigned long int b;

	a = n ^ m;

	for (b = 0; a > 0;)
	{
		if ((a & 1) == 1)
			b++;

		a = a >> 1;
	}

	return (b);
}
