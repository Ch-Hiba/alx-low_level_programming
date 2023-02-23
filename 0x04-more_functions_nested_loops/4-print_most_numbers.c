#include "main.h"
/**
 * print_most_numbers -> print number from 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2)
		{
			continue;
		}
		else if (i == 4)
		{
			continue;
		}

		_putchar(i + '0');
	}
	_putchar('\n');
}
