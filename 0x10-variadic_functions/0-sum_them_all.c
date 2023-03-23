#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: the sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);

	return (sum);
}
