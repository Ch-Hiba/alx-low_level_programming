#include "main.h"

int _pow(int base, int exp);
/**
 * _atoi - convert a string to an integer
 * @str: the string to be converted
 * Return: converted integer
 */
int _atoi(char *str)
{
	unsigned int result;
	int i, j, neg;

	neg = 0;
	result = 0;
	j = -1;
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == '-')
		{
			if (neg == 0)
				neg = 1;
			else
				neg = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			for (j = i; str[j] != '\0'; ++j)
			{
				if (!(str[j] >= '0' && str[j] <= '9'))
					break;
			}
			--j;
			break;
		}
	}
	for (; i <= j; ++i)
		result += (str[i] - '0') * _pow(10, (j - i));
	if (result != 0 && neg == 1)
		result = -result;
	return (result);
}

/**
 * _pow - compute the power a base to its exponent
 * @base: the base
 * @exp: the exponent
 * Return: the result integer
 */
int _pow(int base, int exp)
{
	int result;

	result = 1;
	while (exp >= 1)
	{
		result *= base;
		exp--;
	}
	return (result);
}
