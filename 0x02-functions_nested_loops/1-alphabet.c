#include <main.h>
/**
 * print_alphabet - Description: print alphabet in lowercease using _putchar
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)

		_putchar(c);

	_putchar('\n');
}
