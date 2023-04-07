#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string of chars
 * Return: 0 if b = NULL
 * 0 if there is chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, a = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		if (b[a] > '1' || b[a] < '0')
		{
			return (0);
		}
		uint *= 2;
		if (b[a] == '1')
		{
			uint++;
		}
		a++;
	}

	return (uint);
}
