#include "main.h"

/**
 * print_rev - print a string in reverse
 * @str: string to be processed
 */
void print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (j = i - 1; j >= 0; --j)
		_putchar(str[j]);
	_putchar('\n');
}
