#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string to be processed
 * Description: if the string length is odd print the last (length - 1) / 2
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (j = (i + 1) / 2; j < i; ++j)
		_putchar(str[j]);
	_putchar('\n');
}
