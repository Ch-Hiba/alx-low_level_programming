#include <stdio.h>
#include <limits.h>
#include "main.h"

int _pow(int x, int y);

/**
 * print_number - prints an integer
 *
 * @num: number to print
 *
 */
void print_number(int num)
{
	int quot, degree, i, is_int_min, temp;

	is_int_min = 0;
	if (num == INT_MIN)
	{
		num++;
		is_int_min = 1;
	}
	if (num < 0)
	{
		num = -num;
		_putchar('-');
	}
	quot = num;
	degree = 0;
	while (quot / 10 > 0)
	{
		++degree;
		quot /= 10;
	}
	quot = num;
	for (i = degree; i >= 0; --i)
	{
		temp = quot / _pow(10, i);
		if (i == 0 && is_int_min)
			temp += 1;
		_putchar('0' + temp);
		quot %= _pow(10, i);
	}
}

/**
 * _pow - compute power
 *
 * @x: the base
 * @y: the exponent
 *
 * Return: power of the base to the exponent
 *
 */
int _pow(int x, int y)
{
	int result = 1;

	while (y >= 1)
	{
		result *= x;
		--y;
	}

	return (result);
}
