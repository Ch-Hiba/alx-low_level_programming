#include "main.h"

/**
 * convert_to_binary3 - converts decimal to binary
 * @n: decimal number
 * @bits: array to hold bits
 *
 * Return: void
 */
void convert_to_binary3(unsigned long int n, unsigned short *bits)
{
	unsigned long int tmp;
	unsigned short i;

	i = 0;
	while (n)
	{
		tmp = n;
		n >>= 1;
		if ((n << 1) == tmp)
			bits[i++] = 0;
		else
			bits[i++] = 1;
	}
	while (i < 64)
		bits[i++] = 0;
}

/**
 * flip_bits - count number of bits that need to be fliped
 * @n: first number
 * @m: second number
 * Description: count the number of bits you would flip to get
 * from one number to another
 *
 * Return: number of flips needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned short nbits[64], mbits[64], i;
	unsigned int flips;

	convert_to_binary3(n, nbits), convert_to_binary3(m, mbits);
	flips = 0;
	for (i = 0; i < 64; i++)
		if (nbits[i] != mbits[i])
			flips++;
	return (flips);
}
