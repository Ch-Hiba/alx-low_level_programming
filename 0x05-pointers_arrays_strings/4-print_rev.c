#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: char array string type
 * description: can only use _putchar
 */
void print_rev(char *s)
{
	int i;

	for (i--; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
